/*
 * SPDX-FileCopyrightText: 2015-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <esp_expression_with_stack.h>
#include <setjmp.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/portmacro.h"

StackType_t *xtensa_shared_stack;
shared_stack_function xtensa_shared_stack_callback;
jmp_buf xtensa_shared_stack_env;
bool xtensa_shared_stack_function_done = false;
static portMUX_TYPE xtensa_shared_stack_spinlock = portMUX_INITIALIZER_UNLOCKED;
static void *current_task_stack = NULL;

extern void esp_shared_stack_invoke_function(void);

static void esp_switch_stack_setup(StackType_t *stack, size_t stack_size)
{
    //We need also to tweak current task stackpointer to avoid erroneous
    //stack overflow indication, so fills the stack with freertos known pattern:
    memset(stack, 0xa5U, stack_size * sizeof(StackType_t));

    StaticTask_t *current = (StaticTask_t *)xTaskGetCurrentTaskHandle();
    //Then put the fake stack inside of TCB:
    current_task_stack = current->pxDummy6;
    current->pxDummy6 = (void *)stack;

    StackType_t *top_of_stack = stack + stack_size;

    //Align stack to a 16byte boundary, as required by CPU specific:
    top_of_stack = (StackType_t *)(((UBaseType_t)(top_of_stack - 16) & ~0xf));

#if CONFIG_FREERTOS_WATCHPOINT_END_OF_STACK
    vPortSetStackWatchpoint(stack);
#endif

    xtensa_shared_stack = top_of_stack;
}

void esp_execute_shared_stack_function(SemaphoreHandle_t lock, void *stack, size_t stack_size, shared_stack_function function)
{
    assert(lock);
    assert(stack);
    assert(stack_size > 0 && stack_size >= CONFIG_ESP_MINIMAL_SHARED_STACK_SIZE);
    assert(function);

    xSemaphoreTake(lock, portMAX_DELAY);
    portENTER_CRITICAL(&xtensa_shared_stack_spinlock);
    xtensa_shared_stack_function_done = false;
    esp_switch_stack_setup(stack, stack_size);
    xtensa_shared_stack_callback = function;
    portEXIT_CRITICAL(&xtensa_shared_stack_spinlock);

    setjmp(xtensa_shared_stack_env);
    if (!xtensa_shared_stack_function_done) {
        esp_shared_stack_invoke_function();
    }

    portENTER_CRITICAL(&xtensa_shared_stack_spinlock);
    StaticTask_t *current = (StaticTask_t *)xTaskGetCurrentTaskHandle();

    //Restore current task stack:
    current->pxDummy6 = (StackType_t *)current_task_stack;
#if CONFIG_FREERTOS_WATCHPOINT_END_OF_STACK
    vPortSetStackWatchpoint(current->pxDummy6);
#endif
    portEXIT_CRITICAL(&xtensa_shared_stack_spinlock);

    xSemaphoreGive(lock);
}
