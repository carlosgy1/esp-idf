/*
 * SPDX-FileCopyrightText: 2018-2023 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

//Interrupt hardware source table
//This table is decided by hardware, don't touch this.
typedef enum {
    ETS_LP_RTC_INTR_SOURCE                  = 0,
    ETS_LP_WDT_INTR_SOURCE,
    ETS_LP_TIMER_REG0_INTR_SOURCE,
    ETS_LP_TIMER_REG1_INTR_SOURCE,
    ETS_MB_HP_INTR_SOURCE,
    ETS_MB_LP_INTR_SOURCE,
    ETS_PMU_0_INTR_SOURCE,
    ETS_PMU_1_INTR_SOURCE,
    ETS_LP_ANAPERI_INTR_SOURCE,
    ETS_LP_ADC_INTR_SOURCE,
    ETS_LP_GPIO_INTR_SOURCE,
    ETS_LP_I2C_INTR_SOURCE,
    ETS_LP_I2S_INTR_SOURCE,
    ETS_LP_SPI_INTR_SOURCE,
    ETS_LP_TOUCH_INTR_SOURCE,
    ETS_LP_TSENS_INTR_SOURCE,
    ETS_TEMPERATURE_SENSOR_INTR_SOURCE = ETS_LP_TSENS_INTR_SOURCE,
    ETS_LP_UART_INTR_SOURCE = 16,
    ETS_LP_EFUSE_INTR_SOURCE,
    ETS_LP_SW_INTR_SOURCE,
    ETS_LP_SYSREG_INTR_SOURCE,
    ETS_LP_HUK_INTR_SOURCE,
    ETS_SYS_ICM_INTR_SOURCE,
    ETS_USB_SERIAL_JTAG_INTR_SOURCE,
    ETS_SDIO_HOST_INTR_SOURCE,
    ETS_DW_GDMA_INTR_SOURCE,
    ETS_SPI2_INTR_SOURCE,
    ETS_SPI3_INTR_SOURCE,
    ETS_I2S0_INTR_SOURCE,
    ETS_I2S1_INTR_SOURCE,
    ETS_I2S2_INTR_SOURCE,
    ETS_UHCI0_INTR_SOURCE,
    ETS_UART0_INTR_SOURCE,
    ETS_UART1_INTR_SOURCE,
    ETS_UART2_INTR_SOURCE,
    ETS_UART3_INTR_SOURCE,
    ETS_UART4_INTR_SOURCE,
    ETS_LCD_CAM_INTR_SOURCE,
    ETS_ADC_INTR_SOURCE,
    ETS_PWM0_INTR_SOURCE,
    ETS_PWM1_INTR_SOURCE,
    ETS_TWAI0_INTR_SOURCE,
    ETS_TWAI1_INTR_SOURCE,
    ETS_TWAI2_INTR_SOURCE,
    ETS_RMT_INTR_SOURCE,
    ETS_I2C0_INTR_SOURCE,
    ETS_I2C1_INTR_SOURCE,
    ETS_TG0_T0_INTR_SOURCE,
    ETS_TG0_T1_INTR_SOURCE,
    ETS_TG0_WDT_LEVEL_INTR_SOURCE,
    ETS_TG1_T0_INTR_SOURCE,
    ETS_TG1_T1_INTR_SOURCE,
    ETS_TG1_WDT_LEVEL_INTR_SOURCE,
    ETS_LEDC_INTR_SOURCE,
    ETS_SYSTIMER_TARGET0_INTR_SOURCE,
    ETS_SYSTIMER_TARGET1_INTR_SOURCE,
    ETS_SYSTIMER_TARGET2_INTR_SOURCE,
    ETS_AHB_PDMA_IN_CH0_INTR_SOURCE,
    ETS_AHB_PDMA_IN_CH1_INTR_SOURCE,
    ETS_AHB_PDMA_IN_CH2_INTR_SOURCE,
    ETS_AHB_PDMA_OUT_CH0_INTR_SOURCE,
    ETS_AHB_PDMA_OUT_CH1_INTR_SOURCE,
    ETS_AHB_PDMA_OUT_CH2_INTR_SOURCE,
    ETS_AXI_PDMA_IN_CH0_INTR_SOURCE,
    ETS_AXI_PDMA_IN_CH1_INTR_SOURCE,
    ETS_AXI_PDMA_IN_CH2_INTR_SOURCE,
    ETS_AXI_PDMA_OUT_CH0_INTR_SOURCE,
    ETS_AXI_PDMA_OUT_CH1_INTR_SOURCE,

    ETS_AXI_PDMA_OUT_CH2_INTR_SOURCE,
    ETS_RSA_INTR_SOURCE,
    ETS_AES_INTR_SOURCE,
    ETS_SHA_INTR_SOURCE,
    ETS_ECC_INTR_SOURCE,
    ETS_ECDSA_INTR_SOURCE,
    ETS_KM_INTR_SOURCE,
    ETS_GPIO_INTR0_SOURCE,

    ETS_GPIO_INTR1_SOURCE,
    ETS_GPIO_INTR2_SOURCE,
    ETS_GPIO_INTR3_SOURCE,
    ETS_GPIO_PAD_COMP_INTR_SOURCE,
    ETS_FROM_CPU_INTR0_SOURCE,
    ETS_FROM_CPU_INTR1_SOURCE,
    ETS_FROM_CPU_INTR2_SOURCE,
    ETS_FROM_CPU_INTR3_SOURCE,
    ETS_CACHE_INTR_SOURCE,
    ETS_MSPI_INTR_SOURCE,
    ETS_CSI_BRIDGE_INTR_SOURCE,

    ETS_DSI_BRIDGE_INTR_SOURCE,
    ETS_CSI_INTR_SOURCE,
    ETS_DSI_INTR_SOURCE,
    ETS_GMII_PHY_INTR_SOURCE,
    ETS_LPI_INTR_SOURCE,
    ETS_PMT_INTR_SOURCE,
    ETS_ETH_MAC_INTR_SOURCE,
    ETS_USB_OTG_INTR_SOURCE,
    ETS_USB_OTG_ENDP_MULTI_PROC_INTR_SOURCE,

    ETS_JPEG_INTR_SOURCE,
    ETS_PPA_INTR_SOURCE,
    ETS_CORE0_TRACE_INTR_SOURCE,
    ETS_CORE1_TRACE_INTR_SOURCE,
    ETS_HP_CORE_CTRL_INTR_SOURCE,
    ETS_ISP_INTR_SOURCE,
    ETS_I3C_MST_INTR_SOURCE,
    ETS_I3C_SLV_INTR_SOURCE,
    ETS_USB_OTG11_CH0_INTR_SOURCE,
    ETS_DMA2D_IN_CH0_INTR_SOURCE,

    ETS_DMA2D_IN_CH1_INTR_SOURCE,
    ETS_DMA2D_OUT_CH0_INTR_SOURCE,
    ETS_DMA2D_OUT_CH1_INTR_SOURCE,
    ETS_DMA2D_OUT_CH2_INTR_SOURCE,
    ETS_PSRAM_MSPI_INTR_SOURCE,
    ETS_HP_SYSREG_INTR_SOURCE,
    ETS_PCNT_INTR_SOURCE,

    ETS_HP_PAU_INTR_SOURCE,
    ETS_HP_PARLIO_RX_INTR_SOURCE,
    ETS_HP_PARLIO_TX_INTR_SOURCE,
    ETS_H264_DMA2D_OUT_CH0_INTR_SOURCE,
    ETS_H264_DMA2D_OUT_CH1_INTR_SOURCE,
    ETS_H264_DMA2D_OUT_CH2_INTR_SOURCE,
    ETS_H264_DMA2D_OUT_CH3_INTR_SOURCE,
    ETS_H264_DMA2D_OUT_CH4_INTR_SOURCE,
    ETS_H264_DMA2D_IN_CH0_INTR_SOURCE,
    ETS_H264_DMA2D_IN_CH1_INTR_SOURCE,

    ETS_H264_DMA2D_IN_CH2_INTR_SOURCE,
    ETS_H264_DMA2D_IN_CH3_INTR_SOURCE,
    ETS_H264_DMA2D_IN_CH4_INTR_SOURCE,
    ETS_H264_DMA2D_IN_CH5_INTR_SOURCE,
    ETS_H264_REG_INTR_SOURCE,
    ETS_ASSIST_DEBUG_INTR_SOURCE,

    ETS_MAX_INTR_SOURCE,                        /**< number of interrupt sources */
} periph_interrput_t;

extern const char *const esp_isr_names[ETS_MAX_INTR_SOURCE];

#ifdef __cplusplus
}
#endif
