/*
 * SPDX-FileCopyrightText: 2020-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include "soc/interrupts.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PERIPH_LEDC_MODULE = 0,
    PERIPH_UART0_MODULE,
    PERIPH_UART1_MODULE,
    PERIPH_I2C0_MODULE,
    PERIPH_TIMG0_MODULE,
    PERIPH_TIMG1_MODULE,  //No timg1 on esp32c2, please remove TODO: IDF-3825
    PERIPH_UHCI0_MODULE,
    PERIPH_SPI_MODULE,  //SPI1
    PERIPH_SPI2_MODULE, //SPI2
    PERIPH_RNG_MODULE,
    PERIPH_WIFI_MODULE,
    PERIPH_BT_MODULE,
    PERIPH_WIFI_BT_COMMON_MODULE,
    PERIPH_BT_BASEBAND_MODULE,
    PERIPH_BT_LC_MODULE,
    PERIPH_AES_MODULE,
    PERIPH_SHA_MODULE,
    PERIPH_ECC_MODULE,
    PERIPH_GDMA_MODULE,
    PERIPH_SYSTIMER_MODULE,
    PERIPH_SARADC_MODULE,
    PERIPH_TEMPSENSOR_MODULE,
    PERIPH_MODEM_RPA_MODULE,
    PERIPH_ASSIST_DEBUG_MODULE,
    PERIPH_MODULE_MAX
} periph_module_t;

#ifdef __cplusplus
}
#endif
