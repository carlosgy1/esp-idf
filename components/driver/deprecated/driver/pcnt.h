/*
 * SPDX-FileCopyrightText: 2015-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <stdint.h>
#include "sdkconfig.h"
#include "esp_err.h"
#include "driver/pcnt_types_legacy.h"

#if !CONFIG_PCNT_SUPPRESS_DEPRECATE_WARN
#warning "legacy pcnt driver is deprecated, please migrate to use driver/pulse_cnt.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Configure Pulse Counter unit
 *        @note
 *        This function will disable three events: PCNT_EVT_L_LIM, PCNT_EVT_H_LIM, PCNT_EVT_ZERO.
 *
 * @param pcnt_config Pointer of Pulse Counter unit configure parameter
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver already initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_unit_config(const pcnt_config_t *pcnt_config);

/**
 * @brief Get pulse counter value
 *
 * @param pcnt_unit  Pulse Counter unit number
 * @param count Pointer to accept counter value
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_get_counter_value(pcnt_unit_t pcnt_unit, int16_t *count);

/**
 * @brief Pause PCNT counter of PCNT unit
 *
 * @param pcnt_unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_counter_pause(pcnt_unit_t pcnt_unit);

/**
 * @brief Resume counting for PCNT counter
 *
 * @param pcnt_unit PCNT unit number, select from pcnt_unit_t
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_counter_resume(pcnt_unit_t pcnt_unit);

/**
 * @brief Clear and reset PCNT counter value to zero
 *
 * @param  pcnt_unit PCNT unit number, select from pcnt_unit_t
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_counter_clear(pcnt_unit_t pcnt_unit);

/**
 * @brief Enable PCNT interrupt for PCNT unit
 *        @note
 *        Each Pulse counter unit has five watch point events that share the same interrupt.
 *        Configure events with pcnt_event_enable() and pcnt_event_disable()
 *
 * @param pcnt_unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_intr_enable(pcnt_unit_t pcnt_unit);

/**
 * @brief Disable PCNT interrupt for PCNT unit
 *
 * @param pcnt_unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_intr_disable(pcnt_unit_t pcnt_unit);

/**
 * @brief Enable PCNT event of PCNT unit
 *
 * @param unit PCNT unit number
 * @param evt_type Watch point event type.
 *                 All enabled events share the same interrupt (one interrupt per pulse counter unit).
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_event_enable(pcnt_unit_t unit, pcnt_evt_type_t evt_type);

/**
 * @brief Disable PCNT event of PCNT unit
 *
 * @param unit PCNT unit number
 * @param evt_type Watch point event type.
 *                 All enabled events share the same interrupt (one interrupt per pulse counter unit).
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_event_disable(pcnt_unit_t unit, pcnt_evt_type_t evt_type);

/**
 * @brief Set PCNT event value of PCNT unit
 *
 * @param unit PCNT unit number
 * @param evt_type Watch point event type.
 *                 All enabled events share the same interrupt (one interrupt per pulse counter unit).
 *
 * @param value Counter value for PCNT event
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_set_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t value);

/**
 * @brief Get PCNT event value of PCNT unit
 *
 * @param unit PCNT unit number
 * @param evt_type Watch point event type.
 *                 All enabled events share the same interrupt (one interrupt per pulse counter unit).
 * @param value Pointer to accept counter value for PCNT event
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_get_event_value(pcnt_unit_t unit, pcnt_evt_type_t evt_type, int16_t *value);

/**
 * @brief Get PCNT event status of PCNT unit
 *
 * @param unit PCNT unit number
 * @param status Pointer to accept event status word
 * @return
 *      - ESP_OK Success
 *      - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *      - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_get_event_status(pcnt_unit_t unit, uint32_t *status);

/**
 * @brief Unregister PCNT interrupt handler (registered by pcnt_isr_register), the handler is an ISR.
 *        The handler will be attached to the same CPU core that this function is running on.
 *        If the interrupt service is registered by pcnt_isr_service_install, please call pcnt_isr_service_uninstall instead
 *
 * @param handle handle to unregister the ISR service.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_NOT_FOUND Can not find the interrupt that matches the flags.
 *     - ESP_ERR_INVALID_ARG Function pointer error.
 */
esp_err_t pcnt_isr_unregister(pcnt_isr_handle_t handle);

/**
 * @brief Register PCNT interrupt handler, the handler is an ISR.
 *        The handler will be attached to the same CPU core that this function is running on.
 *        Please do not use pcnt_isr_service_install if this function was called.
 *
 * @param fn Interrupt handler function.
 * @param arg Parameter for handler function
 * @param intr_alloc_flags Flags used to allocate the interrupt. One or multiple (ORred)
 *        ESP_INTR_FLAG_* values. See esp_intr_alloc.h for more info.
 * @param handle Pointer to return handle. If non-NULL, a handle for the interrupt will
 *        be returned here. Calling pcnt_isr_unregister to unregister this ISR service if needed,
 *        but only if the handle is not NULL.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_NOT_FOUND Can not find the interrupt that matches the flags.
 *     - ESP_ERR_INVALID_ARG Function pointer error.
 */
esp_err_t pcnt_isr_register(void (*fn)(void *), void *arg, int intr_alloc_flags, pcnt_isr_handle_t *handle);

/**
 * @brief Configure PCNT pulse signal input pin and control input pin
 *
 * @param unit PCNT unit number
 * @param channel PCNT channel number
 * @param pulse_io Pulse signal input GPIO
 * @param ctrl_io Control signal input GPIO
 *
 * @note  Set the signal input to PCNT_PIN_NOT_USED if unused.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_set_pin(pcnt_unit_t unit, pcnt_channel_t channel, int pulse_io, int ctrl_io);

/**
 * @brief Enable PCNT input filter
 *
 * @param unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_filter_enable(pcnt_unit_t unit);

/**
 * @brief Disable PCNT input filter
 *
 * @param unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_filter_disable(pcnt_unit_t unit);

/**
 * @brief Set PCNT filter value
 *
 * @param unit PCNT unit number
 * @param filter_val PCNT signal filter value, counter in APB_CLK cycles.
 *        Any pulses lasting shorter than this will be ignored when the filter is enabled.
 *        @note
 *        filter_val is a 10-bit value, so the maximum filter_val should be limited to 1023.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_set_filter_value(pcnt_unit_t unit, uint16_t filter_val);

/**
 * @brief Get PCNT filter value
 *
 * @param unit PCNT unit number
 * @param filter_val Pointer to accept PCNT filter value.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_get_filter_value(pcnt_unit_t unit, uint16_t *filter_val);

/**
 * @brief Set PCNT counter mode
 *
 * @param unit PCNT unit number
 * @param channel PCNT channel number
 * @param pos_mode Counter mode when detecting positive edge
 * @param neg_mode Counter mode when detecting negative edge
 * @param hctrl_mode Counter mode when control signal is high level
 * @param lctrl_mode Counter mode when control signal is low level
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_set_mode(pcnt_unit_t unit, pcnt_channel_t channel,
                        pcnt_count_mode_t pos_mode, pcnt_count_mode_t neg_mode,
                        pcnt_ctrl_mode_t hctrl_mode, pcnt_ctrl_mode_t lctrl_mode);

/**
 * @brief Add ISR handler for specified unit.
 *
 * Call this function after using pcnt_isr_service_install() to
 * install the PCNT driver's ISR handler service.
 *
 * The ISR handlers do not need to be declared with IRAM_ATTR,
 * unless you pass the ESP_INTR_FLAG_IRAM flag when allocating the
 * ISR in pcnt_isr_service_install().
 *
 * This ISR handler will be called from an ISR. So there is a stack
 * size limit (configurable as "ISR stack size" in menuconfig). This
 * limit is smaller compared to a global PCNT interrupt handler due
 * to the additional level of indirection.
 *
 * @param unit PCNT unit number
 * @param isr_handler Interrupt handler function.
 * @param args Parameter for handler function
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_isr_handler_add(pcnt_unit_t unit, void(*isr_handler)(void *), void *args);

/**
 * @brief Install PCNT ISR service.
 * @note We can manage different interrupt service for each unit.
 *       This function will use the default ISR handle service, Calling pcnt_isr_service_uninstall to
 *       uninstall the default service if needed. Please do not use pcnt_isr_register if this function was called.
 *
 * @param intr_alloc_flags Flags used to allocate the interrupt. One or multiple (ORred)
 *        ESP_INTR_FLAG_* values. See esp_intr_alloc.h for more info.
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_NO_MEM No memory to install this service
 *     - ESP_ERR_INVALID_STATE ISR service already installed
 */
esp_err_t pcnt_isr_service_install(int intr_alloc_flags);

/**
 * @brief Uninstall PCNT ISR service, freeing related resources.
 */
void pcnt_isr_service_uninstall(void);

/**
 * @brief Delete ISR handler for specified unit.
 *
 * @param unit PCNT unit number
 *
 * @return
 *     - ESP_OK Success
 *     - ESP_ERR_INVALID_STATE pcnt driver has not been initialized
 *     - ESP_ERR_INVALID_ARG Parameter error
 */
esp_err_t pcnt_isr_handler_remove(pcnt_unit_t unit);

#ifdef __cplusplus
}
#endif
