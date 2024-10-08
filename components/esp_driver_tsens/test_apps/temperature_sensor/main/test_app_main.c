/*
 * SPDX-FileCopyrightText: 2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "unity.h"
#include "unity_test_runner.h"
#include "esp_heap_caps.h"

#define TEST_MEMORY_LEAK_THRESHOLD (-1800) // for wifi and lwip

static size_t before_free_8bit;
static size_t before_free_32bit;

static void check_leak(size_t before_free, size_t after_free, const char *type)
{
    ssize_t delta = after_free - before_free;
    printf("MALLOC_CAP_%s: Before %u bytes free, After %u bytes free (delta %d)\n", type, before_free, after_free, delta);
    TEST_ASSERT_MESSAGE(delta >= TEST_MEMORY_LEAK_THRESHOLD, "memory leak");
}

void setUp(void)
{
    before_free_8bit = heap_caps_get_free_size(MALLOC_CAP_8BIT);
    before_free_32bit = heap_caps_get_free_size(MALLOC_CAP_32BIT);
}

void tearDown(void)
{
    size_t after_free_8bit = heap_caps_get_free_size(MALLOC_CAP_8BIT);
    size_t after_free_32bit = heap_caps_get_free_size(MALLOC_CAP_32BIT);
    check_leak(before_free_8bit, after_free_8bit, "8BIT");
    check_leak(before_free_32bit, after_free_32bit, "32BIT");
}

void app_main(void)
{
//  _____                      ____
// |_   _|__ _ __ ___  _ __   / ___|  ___ _ __  ___  ___  _ __
//   | |/ _ \ '_ ` _ \| '_ \  \___ \ / _ \ '_ \/ __|/ _ \| '__|
//   | |  __/ | | | | | |_) |  ___) |  __/ | | \__ \ (_) | |
//   |_|\___|_| |_| |_| .__/  |____/ \___|_| |_|___/\___/|_|
//                    |_|
    printf(" _____                      ____\r\n");
    printf("|_   _|__ _ __ ___  _ __   / ___|  ___ _ __  ___  ___  _ __\r\n");
    printf("  | |/ _ \\ '_ ` _ \\| '_ \\  \\___ \\ / _ \\ '_ \\/ __|/ _ \\| '__|\r\n");
    printf("  | |  __/ | | | | | |_) |  ___) |  __/ | | \\__ \\ (_) | |\r\n");
    printf("  |_|\\___|_| |_| |_| .__/  |____/ \\___|_| |_|___/\\___/|_|\r\n");
    printf("                   |_|\r\n");
    unity_run_menu();
}
