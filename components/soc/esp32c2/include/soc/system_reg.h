/**
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** SYSTEM_CPU_PERI_CLK_EN_REG register
 *  cpu_peripheral clock gating register
 */
#define SYSTEM_CPU_PERI_CLK_EN_REG (DR_REG_SYSTEM_BASE + 0x0)
/** SYSTEM_CLK_EN_ASSIST_DEBUG : R/W; bitpos: [6]; default: 0;
 *  Set 1 to open assist_debug module clock
 */
#define SYSTEM_CLK_EN_ASSIST_DEBUG    (BIT(6))
#define SYSTEM_CLK_EN_ASSIST_DEBUG_M  (SYSTEM_CLK_EN_ASSIST_DEBUG_V << SYSTEM_CLK_EN_ASSIST_DEBUG_S)
#define SYSTEM_CLK_EN_ASSIST_DEBUG_V  0x00000001U
#define SYSTEM_CLK_EN_ASSIST_DEBUG_S  6
/** SYSTEM_CLK_EN_DEDICATED_GPIO : R/W; bitpos: [7]; default: 0;
 *  Set 1 to open dedicated_gpio module clk
 */
#define SYSTEM_CLK_EN_DEDICATED_GPIO    (BIT(7))
#define SYSTEM_CLK_EN_DEDICATED_GPIO_M  (SYSTEM_CLK_EN_DEDICATED_GPIO_V << SYSTEM_CLK_EN_DEDICATED_GPIO_S)
#define SYSTEM_CLK_EN_DEDICATED_GPIO_V  0x00000001U
#define SYSTEM_CLK_EN_DEDICATED_GPIO_S  7

/** SYSTEM_CPU_PERI_RST_EN_REG register
 *  cpu_peripheral reset register
 */
#define SYSTEM_CPU_PERI_RST_EN_REG (DR_REG_SYSTEM_BASE + 0x4)
/** SYSTEM_RST_EN_ASSIST_DEBUG : R/W; bitpos: [6]; default: 1;
 *  Set 1 to let assist_debug module reset
 */
#define SYSTEM_RST_EN_ASSIST_DEBUG    (BIT(6))
#define SYSTEM_RST_EN_ASSIST_DEBUG_M  (SYSTEM_RST_EN_ASSIST_DEBUG_V << SYSTEM_RST_EN_ASSIST_DEBUG_S)
#define SYSTEM_RST_EN_ASSIST_DEBUG_V  0x00000001U
#define SYSTEM_RST_EN_ASSIST_DEBUG_S  6
/** SYSTEM_RST_EN_DEDICATED_GPIO : R/W; bitpos: [7]; default: 1;
 *  Set 1 to let dedicated_gpio module reset
 */
#define SYSTEM_RST_EN_DEDICATED_GPIO    (BIT(7))
#define SYSTEM_RST_EN_DEDICATED_GPIO_M  (SYSTEM_RST_EN_DEDICATED_GPIO_V << SYSTEM_RST_EN_DEDICATED_GPIO_S)
#define SYSTEM_RST_EN_DEDICATED_GPIO_V  0x00000001U
#define SYSTEM_RST_EN_DEDICATED_GPIO_S  7

/** SYSTEM_CPU_PER_CONF_REG register
 *  cpu clock config register
 */
#define SYSTEM_CPU_PER_CONF_REG (DR_REG_SYSTEM_BASE + 0x8)
/** SYSTEM_CPUPERIOD_SEL : R/W; bitpos: [1:0]; default: 0;
 *  This field used to sel cpu clock frequent.
 */
#define SYSTEM_CPUPERIOD_SEL    0x00000003U
#define SYSTEM_CPUPERIOD_SEL_M  (SYSTEM_CPUPERIOD_SEL_V << SYSTEM_CPUPERIOD_SEL_S)
#define SYSTEM_CPUPERIOD_SEL_V  0x00000003U
#define SYSTEM_CPUPERIOD_SEL_S  0
/** SYSTEM_PLL_FREQ_SEL : R/W; bitpos: [2]; default: 1;
 *  This field used to sel pll frequent.
 */
#define SYSTEM_PLL_FREQ_SEL    (BIT(2))
#define SYSTEM_PLL_FREQ_SEL_M  (SYSTEM_PLL_FREQ_SEL_V << SYSTEM_PLL_FREQ_SEL_S)
#define SYSTEM_PLL_FREQ_SEL_V  0x00000001U
#define SYSTEM_PLL_FREQ_SEL_S  2
/** SYSTEM_CPU_WAIT_MODE_FORCE_ON : R/W; bitpos: [3]; default: 1;
 *  Set 1 to force cpu_waiti_clk enable.
 */
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON    (BIT(3))
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_M  (SYSTEM_CPU_WAIT_MODE_FORCE_ON_V << SYSTEM_CPU_WAIT_MODE_FORCE_ON_S)
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_V  0x00000001U
#define SYSTEM_CPU_WAIT_MODE_FORCE_ON_S  3
/** SYSTEM_CPU_WAITI_DELAY_NUM : R/W; bitpos: [7:4]; default: 0;
 *  This field used to set delay cycle when cpu enter waiti mode, after delay waiti_clk
 *  will close
 */
#define SYSTEM_CPU_WAITI_DELAY_NUM    0x0000000FU
#define SYSTEM_CPU_WAITI_DELAY_NUM_M  (SYSTEM_CPU_WAITI_DELAY_NUM_V << SYSTEM_CPU_WAITI_DELAY_NUM_S)
#define SYSTEM_CPU_WAITI_DELAY_NUM_V  0x0000000FU
#define SYSTEM_CPU_WAITI_DELAY_NUM_S  4

/** SYSTEM_MEM_PD_MASK_REG register
 *  memory power down mask register
 */
#define SYSTEM_MEM_PD_MASK_REG (DR_REG_SYSTEM_BASE + 0xc)
/** SYSTEM_LSLP_MEM_PD_MASK : R/W; bitpos: [0]; default: 1;
 *  Set 1 to mask memory power down.
 */
#define SYSTEM_LSLP_MEM_PD_MASK    (BIT(0))
#define SYSTEM_LSLP_MEM_PD_MASK_M  (SYSTEM_LSLP_MEM_PD_MASK_V << SYSTEM_LSLP_MEM_PD_MASK_S)
#define SYSTEM_LSLP_MEM_PD_MASK_V  0x00000001U
#define SYSTEM_LSLP_MEM_PD_MASK_S  0

/** SYSTEM_PERIP_CLK_EN0_REG register
 *  peripheral clock gating register
 */
#define SYSTEM_PERIP_CLK_EN0_REG (DR_REG_SYSTEM_BASE + 0x10)
/** SYSTEM_SPI01_CLK_EN : R/W; bitpos: [1]; default: 1;
 *  Set 1 to enable SPI01 clock
 */
#define SYSTEM_SPI01_CLK_EN    (BIT(1))
#define SYSTEM_SPI01_CLK_EN_M  (SYSTEM_SPI01_CLK_EN_V << SYSTEM_SPI01_CLK_EN_S)
#define SYSTEM_SPI01_CLK_EN_V  0x00000001U
#define SYSTEM_SPI01_CLK_EN_S  1
/** SYSTEM_UART_CLK_EN : R/W; bitpos: [2]; default: 1;
 *  Set 1 to enable UART clock
 */
#define SYSTEM_UART_CLK_EN    (BIT(2))
#define SYSTEM_UART_CLK_EN_M  (SYSTEM_UART_CLK_EN_V << SYSTEM_UART_CLK_EN_S)
#define SYSTEM_UART_CLK_EN_V  0x00000001U
#define SYSTEM_UART_CLK_EN_S  2
/** SYSTEM_UART1_CLK_EN : R/W; bitpos: [5]; default: 1;
 *  Set 1 to enable UART1 clock
 */
#define SYSTEM_UART1_CLK_EN    (BIT(5))
#define SYSTEM_UART1_CLK_EN_M  (SYSTEM_UART1_CLK_EN_V << SYSTEM_UART1_CLK_EN_S)
#define SYSTEM_UART1_CLK_EN_V  0x00000001U
#define SYSTEM_UART1_CLK_EN_S  5
/** SYSTEM_SPI2_CLK_EN : R/W; bitpos: [6]; default: 1;
 *  Set 1 to enable SPI2 clock
 */
#define SYSTEM_SPI2_CLK_EN    (BIT(6))
#define SYSTEM_SPI2_CLK_EN_M  (SYSTEM_SPI2_CLK_EN_V << SYSTEM_SPI2_CLK_EN_S)
#define SYSTEM_SPI2_CLK_EN_V  0x00000001U
#define SYSTEM_SPI2_CLK_EN_S  6
/** SYSTEM_I2C_EXT0_CLK_EN : R/W; bitpos: [7]; default: 0;
 *  Set 1 to enable I2C_EXT0 clock
 */
#define SYSTEM_I2C_EXT0_CLK_EN    (BIT(7))
#define SYSTEM_I2C_EXT0_CLK_EN_M  (SYSTEM_I2C_EXT0_CLK_EN_V << SYSTEM_I2C_EXT0_CLK_EN_S)
#define SYSTEM_I2C_EXT0_CLK_EN_V  0x00000001U
#define SYSTEM_I2C_EXT0_CLK_EN_S  7
/** SYSTEM_LEDC_CLK_EN : R/W; bitpos: [11]; default: 0;
 *  Set 1 to enable LEDC clock
 */
#define SYSTEM_LEDC_CLK_EN    (BIT(11))
#define SYSTEM_LEDC_CLK_EN_M  (SYSTEM_LEDC_CLK_EN_V << SYSTEM_LEDC_CLK_EN_S)
#define SYSTEM_LEDC_CLK_EN_V  0x00000001U
#define SYSTEM_LEDC_CLK_EN_S  11
/** SYSTEM_TIMERGROUP_CLK_EN : R/W; bitpos: [13]; default: 1;
 *  Set 1 to enable TIMERGROUP clock
 */
#define SYSTEM_TIMERGROUP_CLK_EN    (BIT(13))
#define SYSTEM_TIMERGROUP_CLK_EN_M  (SYSTEM_TIMERGROUP_CLK_EN_V << SYSTEM_TIMERGROUP_CLK_EN_S)
#define SYSTEM_TIMERGROUP_CLK_EN_V  0x00000001U
#define SYSTEM_TIMERGROUP_CLK_EN_S  13
/** SYSTEM_UART_MEM_CLK_EN : R/W; bitpos: [24]; default: 1;
 *  Set 1 to enable UART_MEM clock
 */
#define SYSTEM_UART_MEM_CLK_EN    (BIT(24))
#define SYSTEM_UART_MEM_CLK_EN_M  (SYSTEM_UART_MEM_CLK_EN_V << SYSTEM_UART_MEM_CLK_EN_S)
#define SYSTEM_UART_MEM_CLK_EN_V  0x00000001U
#define SYSTEM_UART_MEM_CLK_EN_S  24
/** SYSTEM_APB_SARADC_CLK_EN : R/W; bitpos: [28]; default: 1;
 *  Set 1 to enable APB_SARADC clock
 */
#define SYSTEM_APB_SARADC_CLK_EN    (BIT(28))
#define SYSTEM_APB_SARADC_CLK_EN_M  (SYSTEM_APB_SARADC_CLK_EN_V << SYSTEM_APB_SARADC_CLK_EN_S)
#define SYSTEM_APB_SARADC_CLK_EN_V  0x00000001U
#define SYSTEM_APB_SARADC_CLK_EN_S  28
/** SYSTEM_SYSTIMER_CLK_EN : R/W; bitpos: [29]; default: 1;
 *  Set 1 to enable SYSTEMTIMER clock
 */
#define SYSTEM_SYSTIMER_CLK_EN    (BIT(29))
#define SYSTEM_SYSTIMER_CLK_EN_M  (SYSTEM_SYSTIMER_CLK_EN_V << SYSTEM_SYSTIMER_CLK_EN_S)
#define SYSTEM_SYSTIMER_CLK_EN_V  0x00000001U
#define SYSTEM_SYSTIMER_CLK_EN_S  29
/** SYSTEM_ADC2_ARB_CLK_EN : R/W; bitpos: [30]; default: 1;
 *  Set 1 to enable ADC2_ARB clock
 */
#define SYSTEM_ADC2_ARB_CLK_EN    (BIT(30))
#define SYSTEM_ADC2_ARB_CLK_EN_M  (SYSTEM_ADC2_ARB_CLK_EN_V << SYSTEM_ADC2_ARB_CLK_EN_S)
#define SYSTEM_ADC2_ARB_CLK_EN_V  0x00000001U
#define SYSTEM_ADC2_ARB_CLK_EN_S  30

/** SYSTEM_PERIP_CLK_EN1_REG register
 *  peripheral clock gating register
 */
#define SYSTEM_PERIP_CLK_EN1_REG (DR_REG_SYSTEM_BASE + 0x14)
/** SYSTEM_CRYPTO_ECC_CLK_EN : R/W; bitpos: [1]; default: 0;
 *  Set 1 to enable ECC clock
 */
#define SYSTEM_CRYPTO_ECC_CLK_EN    (BIT(1))
#define SYSTEM_CRYPTO_ECC_CLK_EN_M  (SYSTEM_CRYPTO_ECC_CLK_EN_V << SYSTEM_CRYPTO_ECC_CLK_EN_S)
#define SYSTEM_CRYPTO_ECC_CLK_EN_V  0x00000001U
#define SYSTEM_CRYPTO_ECC_CLK_EN_S  1
/** SYSTEM_CRYPTO_SHA_CLK_EN : R/W; bitpos: [2]; default: 0;
 *  Set 1 to enable SHA clock
 */
#define SYSTEM_CRYPTO_SHA_CLK_EN    (BIT(2))
#define SYSTEM_CRYPTO_SHA_CLK_EN_M  (SYSTEM_CRYPTO_SHA_CLK_EN_V << SYSTEM_CRYPTO_SHA_CLK_EN_S)
#define SYSTEM_CRYPTO_SHA_CLK_EN_V  0x00000001U
#define SYSTEM_CRYPTO_SHA_CLK_EN_S  2
/** SYSTEM_DMA_CLK_EN : R/W; bitpos: [6]; default: 0;
 *  Set 1 to enable DMA clock
 */
#define SYSTEM_DMA_CLK_EN    (BIT(6))
#define SYSTEM_DMA_CLK_EN_M  (SYSTEM_DMA_CLK_EN_V << SYSTEM_DMA_CLK_EN_S)
#define SYSTEM_DMA_CLK_EN_V  0x00000001U
#define SYSTEM_DMA_CLK_EN_S  6
/** SYSTEM_TSENS_CLK_EN : R/W; bitpos: [10]; default: 0;
 *  Set 1 to enable TSENS clock
 */
#define SYSTEM_TSENS_CLK_EN    (BIT(10))
#define SYSTEM_TSENS_CLK_EN_M  (SYSTEM_TSENS_CLK_EN_V << SYSTEM_TSENS_CLK_EN_S)
#define SYSTEM_TSENS_CLK_EN_V  0x00000001U
#define SYSTEM_TSENS_CLK_EN_S  10

/** SYSTEM_PERIP_RST_EN0_REG register
 *  reserved
 */
#define SYSTEM_PERIP_RST_EN0_REG (DR_REG_SYSTEM_BASE + 0x18)
/** SYSTEM_SPI01_RST : R/W; bitpos: [1]; default: 0;
 *  Set 1 to let SPI01 reset
 */
#define SYSTEM_SPI01_RST    (BIT(1))
#define SYSTEM_SPI01_RST_M  (SYSTEM_SPI01_RST_V << SYSTEM_SPI01_RST_S)
#define SYSTEM_SPI01_RST_V  0x00000001U
#define SYSTEM_SPI01_RST_S  1
/** SYSTEM_UART_RST : R/W; bitpos: [2]; default: 0;
 *  Set 1 to let UART reset
 */
#define SYSTEM_UART_RST    (BIT(2))
#define SYSTEM_UART_RST_M  (SYSTEM_UART_RST_V << SYSTEM_UART_RST_S)
#define SYSTEM_UART_RST_V  0x00000001U
#define SYSTEM_UART_RST_S  2
/** SYSTEM_UART1_RST : R/W; bitpos: [5]; default: 0;
 *  Set 1 to let UART1 reset
 */
#define SYSTEM_UART1_RST    (BIT(5))
#define SYSTEM_UART1_RST_M  (SYSTEM_UART1_RST_V << SYSTEM_UART1_RST_S)
#define SYSTEM_UART1_RST_V  0x00000001U
#define SYSTEM_UART1_RST_S  5
/** SYSTEM_SPI2_RST : R/W; bitpos: [6]; default: 0;
 *  Set 1 to let SPI2 reset
 */
#define SYSTEM_SPI2_RST    (BIT(6))
#define SYSTEM_SPI2_RST_M  (SYSTEM_SPI2_RST_V << SYSTEM_SPI2_RST_S)
#define SYSTEM_SPI2_RST_V  0x00000001U
#define SYSTEM_SPI2_RST_S  6
/** SYSTEM_I2C_EXT0_RST : R/W; bitpos: [7]; default: 0;
 *  Set 1 to let I2C_EXT0 reset
 */
#define SYSTEM_I2C_EXT0_RST    (BIT(7))
#define SYSTEM_I2C_EXT0_RST_M  (SYSTEM_I2C_EXT0_RST_V << SYSTEM_I2C_EXT0_RST_S)
#define SYSTEM_I2C_EXT0_RST_V  0x00000001U
#define SYSTEM_I2C_EXT0_RST_S  7
/** SYSTEM_LEDC_RST : R/W; bitpos: [11]; default: 0;
 *  Set 1 to let LEDC reset
 */
#define SYSTEM_LEDC_RST    (BIT(11))
#define SYSTEM_LEDC_RST_M  (SYSTEM_LEDC_RST_V << SYSTEM_LEDC_RST_S)
#define SYSTEM_LEDC_RST_V  0x00000001U
#define SYSTEM_LEDC_RST_S  11
/** SYSTEM_TIMERGROUP_RST : R/W; bitpos: [13]; default: 0;
 *  Set 1 to let TIMERGROUP reset
 */
#define SYSTEM_TIMERGROUP_RST    (BIT(13))
#define SYSTEM_TIMERGROUP_RST_M  (SYSTEM_TIMERGROUP_RST_V << SYSTEM_TIMERGROUP_RST_S)
#define SYSTEM_TIMERGROUP_RST_V  0x00000001U
#define SYSTEM_TIMERGROUP_RST_S  13
/** SYSTEM_UART_MEM_RST : R/W; bitpos: [24]; default: 0;
 *  Set 1 to let UART_MEM reset
 */
#define SYSTEM_UART_MEM_RST    (BIT(24))
#define SYSTEM_UART_MEM_RST_M  (SYSTEM_UART_MEM_RST_V << SYSTEM_UART_MEM_RST_S)
#define SYSTEM_UART_MEM_RST_V  0x00000001U
#define SYSTEM_UART_MEM_RST_S  24
/** SYSTEM_APB_SARADC_RST : R/W; bitpos: [28]; default: 0;
 *  Set 1 to let APB_SARADC reset
 */
#define SYSTEM_APB_SARADC_RST    (BIT(28))
#define SYSTEM_APB_SARADC_RST_M  (SYSTEM_APB_SARADC_RST_V << SYSTEM_APB_SARADC_RST_S)
#define SYSTEM_APB_SARADC_RST_V  0x00000001U
#define SYSTEM_APB_SARADC_RST_S  28
/** SYSTEM_SYSTIMER_RST : R/W; bitpos: [29]; default: 0;
 *  Set 1 to let SYSTIMER reset
 */
#define SYSTEM_SYSTIMER_RST    (BIT(29))
#define SYSTEM_SYSTIMER_RST_M  (SYSTEM_SYSTIMER_RST_V << SYSTEM_SYSTIMER_RST_S)
#define SYSTEM_SYSTIMER_RST_V  0x00000001U
#define SYSTEM_SYSTIMER_RST_S  29
/** SYSTEM_ADC2_ARB_RST : R/W; bitpos: [30]; default: 0;
 *  Set 1 to let ADC2_ARB reset
 */
#define SYSTEM_ADC2_ARB_RST    (BIT(30))
#define SYSTEM_ADC2_ARB_RST_M  (SYSTEM_ADC2_ARB_RST_V << SYSTEM_ADC2_ARB_RST_S)
#define SYSTEM_ADC2_ARB_RST_V  0x00000001U
#define SYSTEM_ADC2_ARB_RST_S  30

/** SYSTEM_PERIP_RST_EN1_REG register
 *  peripheral reset register
 */
#define SYSTEM_PERIP_RST_EN1_REG (DR_REG_SYSTEM_BASE + 0x1c)
/** SYSTEM_CRYPTO_ECC_RST : R/W; bitpos: [1]; default: 1;
 *  Set 1 to let CRYPTO_ECC reset
 */
#define SYSTEM_CRYPTO_ECC_RST    (BIT(1))
#define SYSTEM_CRYPTO_ECC_RST_M  (SYSTEM_CRYPTO_ECC_RST_V << SYSTEM_CRYPTO_ECC_RST_S)
#define SYSTEM_CRYPTO_ECC_RST_V  0x00000001U
#define SYSTEM_CRYPTO_ECC_RST_S  1
/** SYSTEM_CRYPTO_SHA_RST : R/W; bitpos: [2]; default: 1;
 *  Set 1 to let CRYPTO_SHA reset
 */
#define SYSTEM_CRYPTO_SHA_RST    (BIT(2))
#define SYSTEM_CRYPTO_SHA_RST_M  (SYSTEM_CRYPTO_SHA_RST_V << SYSTEM_CRYPTO_SHA_RST_S)
#define SYSTEM_CRYPTO_SHA_RST_V  0x00000001U
#define SYSTEM_CRYPTO_SHA_RST_S  2
/** SYSTEM_DMA_RST : R/W; bitpos: [6]; default: 1;
 *  Set 1 to let DMA reset
 */
#define SYSTEM_DMA_RST    (BIT(6))
#define SYSTEM_DMA_RST_M  (SYSTEM_DMA_RST_V << SYSTEM_DMA_RST_S)
#define SYSTEM_DMA_RST_V  0x00000001U
#define SYSTEM_DMA_RST_S  6
/** SYSTEM_TSENS_RST : R/W; bitpos: [10]; default: 0;
 *  Set 1 to let TSENS reset
 */
#define SYSTEM_TSENS_RST    (BIT(10))
#define SYSTEM_TSENS_RST_M  (SYSTEM_TSENS_RST_V << SYSTEM_TSENS_RST_S)
#define SYSTEM_TSENS_RST_V  0x00000001U
#define SYSTEM_TSENS_RST_S  10

/** SYSTEM_BT_LPCK_DIV_INT_REG register
 *  clock config register
 */
#define SYSTEM_BT_LPCK_DIV_INT_REG (DR_REG_SYSTEM_BASE + 0x20)
/** SYSTEM_BT_LPCK_DIV_NUM : R/W; bitpos: [11:0]; default: 255;
 *  This field is lower power clock frequent division factor
 */
#define SYSTEM_BT_LPCK_DIV_NUM    0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_NUM_M  (SYSTEM_BT_LPCK_DIV_NUM_V << SYSTEM_BT_LPCK_DIV_NUM_S)
#define SYSTEM_BT_LPCK_DIV_NUM_V  0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_NUM_S  0

/** SYSTEM_BT_LPCK_DIV_FRAC_REG register
 *  low power clock configuration register
 */
#define SYSTEM_BT_LPCK_DIV_FRAC_REG (DR_REG_SYSTEM_BASE + 0x24)
/** SYSTEM_BT_LPCK_DIV_B : R/W; bitpos: [11:0]; default: 1;
 *  This field is lower power clock frequent division factor b
 */
#define SYSTEM_BT_LPCK_DIV_B    0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_B_M  (SYSTEM_BT_LPCK_DIV_B_V << SYSTEM_BT_LPCK_DIV_B_S)
#define SYSTEM_BT_LPCK_DIV_B_V  0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_B_S  0
/** SYSTEM_BT_LPCK_DIV_A : R/W; bitpos: [23:12]; default: 1;
 *  This field is lower power clock frequent division factor a
 */
#define SYSTEM_BT_LPCK_DIV_A    0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_A_M  (SYSTEM_BT_LPCK_DIV_A_V << SYSTEM_BT_LPCK_DIV_A_S)
#define SYSTEM_BT_LPCK_DIV_A_V  0x00000FFFU
#define SYSTEM_BT_LPCK_DIV_A_S  12
/** SYSTEM_LPCLK_SEL_RTC_SLOW : R/W; bitpos: [24]; default: 0;
 *  Set 1 to select rtc-slow clock as rtc low power clock
 */
#define SYSTEM_LPCLK_SEL_RTC_SLOW    (BIT(24))
#define SYSTEM_LPCLK_SEL_RTC_SLOW_M  (SYSTEM_LPCLK_SEL_RTC_SLOW_V << SYSTEM_LPCLK_SEL_RTC_SLOW_S)
#define SYSTEM_LPCLK_SEL_RTC_SLOW_V  0x00000001U
#define SYSTEM_LPCLK_SEL_RTC_SLOW_S  24
/** SYSTEM_LPCLK_SEL_8M : R/W; bitpos: [25]; default: 1;
 *  Set 1 to select 8m clock as rtc low power clock
 */
#define SYSTEM_LPCLK_SEL_8M    (BIT(25))
#define SYSTEM_LPCLK_SEL_8M_M  (SYSTEM_LPCLK_SEL_8M_V << SYSTEM_LPCLK_SEL_8M_S)
#define SYSTEM_LPCLK_SEL_8M_V  0x00000001U
#define SYSTEM_LPCLK_SEL_8M_S  25
/** SYSTEM_LPCLK_SEL_XTAL : R/W; bitpos: [26]; default: 0;
 *  Set 1 to select xtal clock as rtc low power clock
 */
#define SYSTEM_LPCLK_SEL_XTAL    (BIT(26))
#define SYSTEM_LPCLK_SEL_XTAL_M  (SYSTEM_LPCLK_SEL_XTAL_V << SYSTEM_LPCLK_SEL_XTAL_S)
#define SYSTEM_LPCLK_SEL_XTAL_V  0x00000001U
#define SYSTEM_LPCLK_SEL_XTAL_S  26
/** SYSTEM_LPCLK_SEL_XTAL32K : R/W; bitpos: [27]; default: 0;
 *  Set 1 to select xtal32k clock as low power clock
 */
#define SYSTEM_LPCLK_SEL_XTAL32K    (BIT(27))
#define SYSTEM_LPCLK_SEL_XTAL32K_M  (SYSTEM_LPCLK_SEL_XTAL32K_V << SYSTEM_LPCLK_SEL_XTAL32K_S)
#define SYSTEM_LPCLK_SEL_XTAL32K_V  0x00000001U
#define SYSTEM_LPCLK_SEL_XTAL32K_S  27
/** SYSTEM_LPCLK_RTC_EN : R/W; bitpos: [28]; default: 0;
 *  Set 1 to enable RTC low power clock
 */
#define SYSTEM_LPCLK_RTC_EN    (BIT(28))
#define SYSTEM_LPCLK_RTC_EN_M  (SYSTEM_LPCLK_RTC_EN_V << SYSTEM_LPCLK_RTC_EN_S)
#define SYSTEM_LPCLK_RTC_EN_V  0x00000001U
#define SYSTEM_LPCLK_RTC_EN_S  28

/** SYSTEM_CPU_INTR_FROM_CPU_0_REG register
 *  interrupt generate register
 */
#define SYSTEM_CPU_INTR_FROM_CPU_0_REG (DR_REG_SYSTEM_BASE + 0x28)
/** SYSTEM_CPU_INTR_FROM_CPU_0 : R/W; bitpos: [0]; default: 0;
 *  Set 1 to generate cpu interrupt 0
 */
#define SYSTEM_CPU_INTR_FROM_CPU_0    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_0_M  (SYSTEM_CPU_INTR_FROM_CPU_0_V << SYSTEM_CPU_INTR_FROM_CPU_0_S)
#define SYSTEM_CPU_INTR_FROM_CPU_0_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_0_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_1_REG register
 *  interrupt generate register
 */
#define SYSTEM_CPU_INTR_FROM_CPU_1_REG (DR_REG_SYSTEM_BASE + 0x2c)
/** SYSTEM_CPU_INTR_FROM_CPU_1 : R/W; bitpos: [0]; default: 0;
 *  Set 1 to generate cpu interrupt 1
 */
#define SYSTEM_CPU_INTR_FROM_CPU_1    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_1_M  (SYSTEM_CPU_INTR_FROM_CPU_1_V << SYSTEM_CPU_INTR_FROM_CPU_1_S)
#define SYSTEM_CPU_INTR_FROM_CPU_1_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_1_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_2_REG register
 *  interrupt generate register
 */
#define SYSTEM_CPU_INTR_FROM_CPU_2_REG (DR_REG_SYSTEM_BASE + 0x30)
/** SYSTEM_CPU_INTR_FROM_CPU_2 : R/W; bitpos: [0]; default: 0;
 *  Set 1 to generate cpu interrupt 2
 */
#define SYSTEM_CPU_INTR_FROM_CPU_2    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_2_M  (SYSTEM_CPU_INTR_FROM_CPU_2_V << SYSTEM_CPU_INTR_FROM_CPU_2_S)
#define SYSTEM_CPU_INTR_FROM_CPU_2_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_2_S  0

/** SYSTEM_CPU_INTR_FROM_CPU_3_REG register
 *  interrupt generate register
 */
#define SYSTEM_CPU_INTR_FROM_CPU_3_REG (DR_REG_SYSTEM_BASE + 0x34)
/** SYSTEM_CPU_INTR_FROM_CPU_3 : R/W; bitpos: [0]; default: 0;
 *  Set 1 to generate cpu interrupt 3
 */
#define SYSTEM_CPU_INTR_FROM_CPU_3    (BIT(0))
#define SYSTEM_CPU_INTR_FROM_CPU_3_M  (SYSTEM_CPU_INTR_FROM_CPU_3_V << SYSTEM_CPU_INTR_FROM_CPU_3_S)
#define SYSTEM_CPU_INTR_FROM_CPU_3_V  0x00000001U
#define SYSTEM_CPU_INTR_FROM_CPU_3_S  0

/** SYSTEM_RSA_PD_CTRL_REG register
 *  rsa memory power control register
 */
#define SYSTEM_RSA_PD_CTRL_REG (DR_REG_SYSTEM_BASE + 0x38)
/** SYSTEM_RSA_MEM_PD : R/W; bitpos: [0]; default: 1;
 *  Set 1 to power down RSA memory. This bit has the lowest priority.When Digital
 *  Signature occupies the RSA. This bit is invalid.
 */
#define SYSTEM_RSA_MEM_PD    (BIT(0))
#define SYSTEM_RSA_MEM_PD_M  (SYSTEM_RSA_MEM_PD_V << SYSTEM_RSA_MEM_PD_S)
#define SYSTEM_RSA_MEM_PD_V  0x00000001U
#define SYSTEM_RSA_MEM_PD_S  0
/** SYSTEM_RSA_MEM_FORCE_PU : R/W; bitpos: [1]; default: 0;
 *  Set 1 to force power up RSA memory. This bit has the second highest priority.
 */
#define SYSTEM_RSA_MEM_FORCE_PU    (BIT(1))
#define SYSTEM_RSA_MEM_FORCE_PU_M  (SYSTEM_RSA_MEM_FORCE_PU_V << SYSTEM_RSA_MEM_FORCE_PU_S)
#define SYSTEM_RSA_MEM_FORCE_PU_V  0x00000001U
#define SYSTEM_RSA_MEM_FORCE_PU_S  1
/** SYSTEM_RSA_MEM_FORCE_PD : R/W; bitpos: [2]; default: 0;
 *  Set 1 to force power down RSA memory. This bit has the highest priority.
 */
#define SYSTEM_RSA_MEM_FORCE_PD    (BIT(2))
#define SYSTEM_RSA_MEM_FORCE_PD_M  (SYSTEM_RSA_MEM_FORCE_PD_V << SYSTEM_RSA_MEM_FORCE_PD_S)
#define SYSTEM_RSA_MEM_FORCE_PD_V  0x00000001U
#define SYSTEM_RSA_MEM_FORCE_PD_S  2

/** SYSTEM_EDMA_CTRL_REG register
 *  edma clcok and reset register
 */
#define SYSTEM_EDMA_CTRL_REG (DR_REG_SYSTEM_BASE + 0x3c)
/** SYSTEM_EDMA_CLK_ON : R/W; bitpos: [0]; default: 1;
 *  Set 1 to enable EDMA clock.
 */
#define SYSTEM_EDMA_CLK_ON    (BIT(0))
#define SYSTEM_EDMA_CLK_ON_M  (SYSTEM_EDMA_CLK_ON_V << SYSTEM_EDMA_CLK_ON_S)
#define SYSTEM_EDMA_CLK_ON_V  0x00000001U
#define SYSTEM_EDMA_CLK_ON_S  0
/** SYSTEM_EDMA_RESET : R/W; bitpos: [1]; default: 0;
 *  Set 1 to let EDMA reset
 */
#define SYSTEM_EDMA_RESET    (BIT(1))
#define SYSTEM_EDMA_RESET_M  (SYSTEM_EDMA_RESET_V << SYSTEM_EDMA_RESET_S)
#define SYSTEM_EDMA_RESET_V  0x00000001U
#define SYSTEM_EDMA_RESET_S  1

/** SYSTEM_CACHE_CONTROL_REG register
 *  cache control register
 */
#define SYSTEM_CACHE_CONTROL_REG (DR_REG_SYSTEM_BASE + 0x40)
/** SYSTEM_ICACHE_CLK_ON : R/W; bitpos: [0]; default: 1;
 *  Set 1 to enable icache clock
 */
#define SYSTEM_ICACHE_CLK_ON    (BIT(0))
#define SYSTEM_ICACHE_CLK_ON_M  (SYSTEM_ICACHE_CLK_ON_V << SYSTEM_ICACHE_CLK_ON_S)
#define SYSTEM_ICACHE_CLK_ON_V  0x00000001U
#define SYSTEM_ICACHE_CLK_ON_S  0
/** SYSTEM_ICACHE_RESET : R/W; bitpos: [1]; default: 0;
 *  Set 1 to let icache reset
 */
#define SYSTEM_ICACHE_RESET    (BIT(1))
#define SYSTEM_ICACHE_RESET_M  (SYSTEM_ICACHE_RESET_V << SYSTEM_ICACHE_RESET_S)
#define SYSTEM_ICACHE_RESET_V  0x00000001U
#define SYSTEM_ICACHE_RESET_S  1
/** SYSTEM_DCACHE_CLK_ON : R/W; bitpos: [2]; default: 1;
 *  Set 1 to enable dcache clock
 */
#define SYSTEM_DCACHE_CLK_ON    (BIT(2))
#define SYSTEM_DCACHE_CLK_ON_M  (SYSTEM_DCACHE_CLK_ON_V << SYSTEM_DCACHE_CLK_ON_S)
#define SYSTEM_DCACHE_CLK_ON_V  0x00000001U
#define SYSTEM_DCACHE_CLK_ON_S  2
/** SYSTEM_DCACHE_RESET : R/W; bitpos: [3]; default: 0;
 *  Set 1 to let dcache reset
 */
#define SYSTEM_DCACHE_RESET    (BIT(3))
#define SYSTEM_DCACHE_RESET_M  (SYSTEM_DCACHE_RESET_V << SYSTEM_DCACHE_RESET_S)
#define SYSTEM_DCACHE_RESET_V  0x00000001U
#define SYSTEM_DCACHE_RESET_S  3

/** SYSTEM_EXTERNAL_DEVICE_ENCRYPT_DECRYPT_CONTROL_REG register
 *  SYSTEM_EXTERNAL_DEVICE_ENCRYPT_DECRYPT_CONTROL_REG
 */
#define SYSTEM_EXTERNAL_DEVICE_ENCRYPT_DECRYPT_CONTROL_REG (DR_REG_SYSTEM_BASE + 0x44)
/** SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT : R/W; bitpos: [0]; default: 0;
 *  Set 1 to enable the SPI manual encrypt.
 */
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT    (BIT(0))
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_M  (SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_V << SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_S)
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_SPI_MANUAL_ENCRYPT_S  0
/** SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT : R/W; bitpos: [1]; default: 0;
 *  Set 1 to enable download DB encrypt.
 */
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT    (BIT(1))
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_V << SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_DB_ENCRYPT_S  1
/** SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT : R/W; bitpos: [2]; default: 0;
 *  Set 1 to enable download G0CB decrypt
 */
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT    (BIT(2))
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_V << SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_G0CB_DECRYPT_S  2
/** SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT : R/W; bitpos: [3]; default: 0;
 *  Set 1 to enable download manual encrypt
 */
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT    (BIT(3))
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_M  (SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_V << SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_S)
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_V  0x00000001U
#define SYSTEM_ENABLE_DOWNLOAD_MANUAL_ENCRYPT_S  3

/** SYSTEM_RTC_FASTMEM_CONFIG_REG register
 *  fast memory config register
 */
#define SYSTEM_RTC_FASTMEM_CONFIG_REG (DR_REG_SYSTEM_BASE + 0x48)
/** SYSTEM_RTC_MEM_CRC_START : R/W; bitpos: [8]; default: 0;
 *  Set 1 to start the CRC of RTC memory
 */
#define SYSTEM_RTC_MEM_CRC_START    (BIT(8))
#define SYSTEM_RTC_MEM_CRC_START_M  (SYSTEM_RTC_MEM_CRC_START_V << SYSTEM_RTC_MEM_CRC_START_S)
#define SYSTEM_RTC_MEM_CRC_START_V  0x00000001U
#define SYSTEM_RTC_MEM_CRC_START_S  8
/** SYSTEM_RTC_MEM_CRC_ADDR : R/W; bitpos: [19:9]; default: 0;
 *  This field is used to set address of RTC memory for CRC.
 */
#define SYSTEM_RTC_MEM_CRC_ADDR    0x000007FFU
#define SYSTEM_RTC_MEM_CRC_ADDR_M  (SYSTEM_RTC_MEM_CRC_ADDR_V << SYSTEM_RTC_MEM_CRC_ADDR_S)
#define SYSTEM_RTC_MEM_CRC_ADDR_V  0x000007FFU
#define SYSTEM_RTC_MEM_CRC_ADDR_S  9
/** SYSTEM_RTC_MEM_CRC_LEN : R/W; bitpos: [30:20]; default: 2047;
 *  This field is used to set length of RTC memory for CRC based on start address.
 */
#define SYSTEM_RTC_MEM_CRC_LEN    0x000007FFU
#define SYSTEM_RTC_MEM_CRC_LEN_M  (SYSTEM_RTC_MEM_CRC_LEN_V << SYSTEM_RTC_MEM_CRC_LEN_S)
#define SYSTEM_RTC_MEM_CRC_LEN_V  0x000007FFU
#define SYSTEM_RTC_MEM_CRC_LEN_S  20
/** SYSTEM_RTC_MEM_CRC_FINISH : RO; bitpos: [31]; default: 0;
 *  This bit stores the status of RTC memory CRC.1 means finished.
 */
#define SYSTEM_RTC_MEM_CRC_FINISH    (BIT(31))
#define SYSTEM_RTC_MEM_CRC_FINISH_M  (SYSTEM_RTC_MEM_CRC_FINISH_V << SYSTEM_RTC_MEM_CRC_FINISH_S)
#define SYSTEM_RTC_MEM_CRC_FINISH_V  0x00000001U
#define SYSTEM_RTC_MEM_CRC_FINISH_S  31

/** SYSTEM_RTC_FASTMEM_CRC_REG register
 *  reserved
 */
#define SYSTEM_RTC_FASTMEM_CRC_REG (DR_REG_SYSTEM_BASE + 0x4c)
/** SYSTEM_RTC_MEM_CRC_RES : RO; bitpos: [31:0]; default: 0;
 *  This field stores the CRC result of RTC memory.
 */
#define SYSTEM_RTC_MEM_CRC_RES    0xFFFFFFFFU
#define SYSTEM_RTC_MEM_CRC_RES_M  (SYSTEM_RTC_MEM_CRC_RES_V << SYSTEM_RTC_MEM_CRC_RES_S)
#define SYSTEM_RTC_MEM_CRC_RES_V  0xFFFFFFFFU
#define SYSTEM_RTC_MEM_CRC_RES_S  0

/** SYSTEM_REDUNDANT_ECO_CTRL_REG register
 *  eco register
 */
#define SYSTEM_REDUNDANT_ECO_CTRL_REG (DR_REG_SYSTEM_BASE + 0x50)
/** SYSTEM_REDUNDANT_ECO_DRIVE : R/W; bitpos: [0]; default: 0;
 *  reg_redundant_eco_drive
 */
#define SYSTEM_REDUNDANT_ECO_DRIVE    (BIT(0))
#define SYSTEM_REDUNDANT_ECO_DRIVE_M  (SYSTEM_REDUNDANT_ECO_DRIVE_V << SYSTEM_REDUNDANT_ECO_DRIVE_S)
#define SYSTEM_REDUNDANT_ECO_DRIVE_V  0x00000001U
#define SYSTEM_REDUNDANT_ECO_DRIVE_S  0
/** SYSTEM_REDUNDANT_ECO_RESULT : RO; bitpos: [1]; default: 0;
 *  reg_redundant_eco_result
 */
#define SYSTEM_REDUNDANT_ECO_RESULT    (BIT(1))
#define SYSTEM_REDUNDANT_ECO_RESULT_M  (SYSTEM_REDUNDANT_ECO_RESULT_V << SYSTEM_REDUNDANT_ECO_RESULT_S)
#define SYSTEM_REDUNDANT_ECO_RESULT_V  0x00000001U
#define SYSTEM_REDUNDANT_ECO_RESULT_S  1

/** SYSTEM_CLOCK_GATE_REG register
 *  clock gating register
 */
#define SYSTEM_CLOCK_GATE_REG (DR_REG_SYSTEM_BASE + 0x54)
/** SYSTEM_CLK_EN : R/W; bitpos: [0]; default: 1;
 *  reg_clk_en
 */
#define SYSTEM_CLK_EN    (BIT(0))
#define SYSTEM_CLK_EN_M  (SYSTEM_CLK_EN_V << SYSTEM_CLK_EN_S)
#define SYSTEM_CLK_EN_V  0x00000001U
#define SYSTEM_CLK_EN_S  0

/** SYSTEM_SYSCLK_CONF_REG register
 *  system clock config register
 */
#define SYSTEM_SYSCLK_CONF_REG (DR_REG_SYSTEM_BASE + 0x58)
/** SYSTEM_PRE_DIV_CNT : R/W; bitpos: [9:0]; default: 1;
 *  This field is used to set the count of prescaler of XTAL_CLK.
 */
#define SYSTEM_PRE_DIV_CNT    0x000003FFU
#define SYSTEM_PRE_DIV_CNT_M  (SYSTEM_PRE_DIV_CNT_V << SYSTEM_PRE_DIV_CNT_S)
#define SYSTEM_PRE_DIV_CNT_V  0x000003FFU
#define SYSTEM_PRE_DIV_CNT_S  0
/** SYSTEM_SOC_CLK_SEL : R/W; bitpos: [11:10]; default: 0;
 *  This field is used to select soc clock.
 */
#define SYSTEM_SOC_CLK_SEL    0x00000003U
#define SYSTEM_SOC_CLK_SEL_M  (SYSTEM_SOC_CLK_SEL_V << SYSTEM_SOC_CLK_SEL_S)
#define SYSTEM_SOC_CLK_SEL_V  0x00000003U
#define SYSTEM_SOC_CLK_SEL_S  10
/** SYSTEM_CLK_XTAL_FREQ : RO; bitpos: [18:12]; default: 0;
 *  This field is used to read xtal frequency in MHz.
 */
#define SYSTEM_CLK_XTAL_FREQ    0x0000007FU
#define SYSTEM_CLK_XTAL_FREQ_M  (SYSTEM_CLK_XTAL_FREQ_V << SYSTEM_CLK_XTAL_FREQ_S)
#define SYSTEM_CLK_XTAL_FREQ_V  0x0000007FU
#define SYSTEM_CLK_XTAL_FREQ_S  12
/** SYSTEM_CLK_DIV_EN : RO; bitpos: [19]; default: 0;
 *  reg_clk_div_en
 */
#define SYSTEM_CLK_DIV_EN    (BIT(19))
#define SYSTEM_CLK_DIV_EN_M  (SYSTEM_CLK_DIV_EN_V << SYSTEM_CLK_DIV_EN_S)
#define SYSTEM_CLK_DIV_EN_V  0x00000001U
#define SYSTEM_CLK_DIV_EN_S  19

/** SYSTEM_MEM_PVT_REG register
 *  mem pvt register
 */
#define SYSTEM_MEM_PVT_REG (DR_REG_SYSTEM_BASE + 0x5c)
/** SYSTEM_MEM_PATH_LEN : R/W; bitpos: [3:0]; default: 3;
 *  reg_mem_path_len
 */
#define SYSTEM_MEM_PATH_LEN    0x0000000FU
#define SYSTEM_MEM_PATH_LEN_M  (SYSTEM_MEM_PATH_LEN_V << SYSTEM_MEM_PATH_LEN_S)
#define SYSTEM_MEM_PATH_LEN_V  0x0000000FU
#define SYSTEM_MEM_PATH_LEN_S  0
/** SYSTEM_MEM_ERR_CNT_CLR : WT; bitpos: [4]; default: 0;
 *  reg_mem_err_cnt_clr
 */
#define SYSTEM_MEM_ERR_CNT_CLR    (BIT(4))
#define SYSTEM_MEM_ERR_CNT_CLR_M  (SYSTEM_MEM_ERR_CNT_CLR_V << SYSTEM_MEM_ERR_CNT_CLR_S)
#define SYSTEM_MEM_ERR_CNT_CLR_V  0x00000001U
#define SYSTEM_MEM_ERR_CNT_CLR_S  4
/** SYSTEM_MEM_PVT_MONITOR_EN : R/W; bitpos: [5]; default: 0;
 *  reg_mem_pvt_monitor_en
 */
#define SYSTEM_MEM_PVT_MONITOR_EN    (BIT(5))
#define SYSTEM_MEM_PVT_MONITOR_EN_M  (SYSTEM_MEM_PVT_MONITOR_EN_V << SYSTEM_MEM_PVT_MONITOR_EN_S)
#define SYSTEM_MEM_PVT_MONITOR_EN_V  0x00000001U
#define SYSTEM_MEM_PVT_MONITOR_EN_S  5
/** SYSTEM_MEM_TIMING_ERR_CNT : RO; bitpos: [21:6]; default: 0;
 *  reg_mem_timing_err_cnt
 */
#define SYSTEM_MEM_TIMING_ERR_CNT    0x0000FFFFU
#define SYSTEM_MEM_TIMING_ERR_CNT_M  (SYSTEM_MEM_TIMING_ERR_CNT_V << SYSTEM_MEM_TIMING_ERR_CNT_S)
#define SYSTEM_MEM_TIMING_ERR_CNT_V  0x0000FFFFU
#define SYSTEM_MEM_TIMING_ERR_CNT_S  6
/** SYSTEM_MEM_VT_SEL : R/W; bitpos: [23:22]; default: 0;
 *  reg_mem_vt_sel
 */
#define SYSTEM_MEM_VT_SEL    0x00000003U
#define SYSTEM_MEM_VT_SEL_M  (SYSTEM_MEM_VT_SEL_V << SYSTEM_MEM_VT_SEL_S)
#define SYSTEM_MEM_VT_SEL_V  0x00000003U
#define SYSTEM_MEM_VT_SEL_S  22

/** SYSTEM_COMB_PVT_LVT_CONF_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_LVT_CONF_REG (DR_REG_SYSTEM_BASE + 0x60)
/** SYSTEM_COMB_PATH_LEN_LVT : R/W; bitpos: [5:0]; default: 3;
 *  reg_comb_path_len_lvt
 */
#define SYSTEM_COMB_PATH_LEN_LVT    0x0000003FU
#define SYSTEM_COMB_PATH_LEN_LVT_M  (SYSTEM_COMB_PATH_LEN_LVT_V << SYSTEM_COMB_PATH_LEN_LVT_S)
#define SYSTEM_COMB_PATH_LEN_LVT_V  0x0000003FU
#define SYSTEM_COMB_PATH_LEN_LVT_S  0
/** SYSTEM_COMB_ERR_CNT_CLR_LVT : WT; bitpos: [6]; default: 0;
 *  reg_comb_err_cnt_clr_lvt
 */
#define SYSTEM_COMB_ERR_CNT_CLR_LVT    (BIT(6))
#define SYSTEM_COMB_ERR_CNT_CLR_LVT_M  (SYSTEM_COMB_ERR_CNT_CLR_LVT_V << SYSTEM_COMB_ERR_CNT_CLR_LVT_S)
#define SYSTEM_COMB_ERR_CNT_CLR_LVT_V  0x00000001U
#define SYSTEM_COMB_ERR_CNT_CLR_LVT_S  6
/** SYSTEM_COMB_PVT_MONITOR_EN_LVT : R/W; bitpos: [7]; default: 0;
 *  reg_comb_pvt_monitor_en_lvt
 */
#define SYSTEM_COMB_PVT_MONITOR_EN_LVT    (BIT(7))
#define SYSTEM_COMB_PVT_MONITOR_EN_LVT_M  (SYSTEM_COMB_PVT_MONITOR_EN_LVT_V << SYSTEM_COMB_PVT_MONITOR_EN_LVT_S)
#define SYSTEM_COMB_PVT_MONITOR_EN_LVT_V  0x00000001U
#define SYSTEM_COMB_PVT_MONITOR_EN_LVT_S  7

/** SYSTEM_COMB_PVT_NVT_CONF_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_NVT_CONF_REG (DR_REG_SYSTEM_BASE + 0x64)
/** SYSTEM_COMB_PATH_LEN_NVT : R/W; bitpos: [5:0]; default: 3;
 *  reg_comb_path_len_nvt
 */
#define SYSTEM_COMB_PATH_LEN_NVT    0x0000003FU
#define SYSTEM_COMB_PATH_LEN_NVT_M  (SYSTEM_COMB_PATH_LEN_NVT_V << SYSTEM_COMB_PATH_LEN_NVT_S)
#define SYSTEM_COMB_PATH_LEN_NVT_V  0x0000003FU
#define SYSTEM_COMB_PATH_LEN_NVT_S  0
/** SYSTEM_COMB_ERR_CNT_CLR_NVT : WT; bitpos: [6]; default: 0;
 *  reg_comb_err_cnt_clr_nvt
 */
#define SYSTEM_COMB_ERR_CNT_CLR_NVT    (BIT(6))
#define SYSTEM_COMB_ERR_CNT_CLR_NVT_M  (SYSTEM_COMB_ERR_CNT_CLR_NVT_V << SYSTEM_COMB_ERR_CNT_CLR_NVT_S)
#define SYSTEM_COMB_ERR_CNT_CLR_NVT_V  0x00000001U
#define SYSTEM_COMB_ERR_CNT_CLR_NVT_S  6
/** SYSTEM_COMB_PVT_MONITOR_EN_NVT : R/W; bitpos: [7]; default: 0;
 *  reg_comb_pvt_monitor_en_nvt
 */
#define SYSTEM_COMB_PVT_MONITOR_EN_NVT    (BIT(7))
#define SYSTEM_COMB_PVT_MONITOR_EN_NVT_M  (SYSTEM_COMB_PVT_MONITOR_EN_NVT_V << SYSTEM_COMB_PVT_MONITOR_EN_NVT_S)
#define SYSTEM_COMB_PVT_MONITOR_EN_NVT_V  0x00000001U
#define SYSTEM_COMB_PVT_MONITOR_EN_NVT_S  7

/** SYSTEM_COMB_PVT_HVT_CONF_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_HVT_CONF_REG (DR_REG_SYSTEM_BASE + 0x68)
/** SYSTEM_COMB_PATH_LEN_HVT : R/W; bitpos: [5:0]; default: 3;
 *  reg_comb_path_len_hvt
 */
#define SYSTEM_COMB_PATH_LEN_HVT    0x0000003FU
#define SYSTEM_COMB_PATH_LEN_HVT_M  (SYSTEM_COMB_PATH_LEN_HVT_V << SYSTEM_COMB_PATH_LEN_HVT_S)
#define SYSTEM_COMB_PATH_LEN_HVT_V  0x0000003FU
#define SYSTEM_COMB_PATH_LEN_HVT_S  0
/** SYSTEM_COMB_ERR_CNT_CLR_HVT : WT; bitpos: [6]; default: 0;
 *  reg_comb_err_cnt_clr_hvt
 */
#define SYSTEM_COMB_ERR_CNT_CLR_HVT    (BIT(6))
#define SYSTEM_COMB_ERR_CNT_CLR_HVT_M  (SYSTEM_COMB_ERR_CNT_CLR_HVT_V << SYSTEM_COMB_ERR_CNT_CLR_HVT_S)
#define SYSTEM_COMB_ERR_CNT_CLR_HVT_V  0x00000001U
#define SYSTEM_COMB_ERR_CNT_CLR_HVT_S  6
/** SYSTEM_COMB_PVT_MONITOR_EN_HVT : R/W; bitpos: [7]; default: 0;
 *  reg_comb_pvt_monitor_en_hvt
 */
#define SYSTEM_COMB_PVT_MONITOR_EN_HVT    (BIT(7))
#define SYSTEM_COMB_PVT_MONITOR_EN_HVT_M  (SYSTEM_COMB_PVT_MONITOR_EN_HVT_V << SYSTEM_COMB_PVT_MONITOR_EN_HVT_S)
#define SYSTEM_COMB_PVT_MONITOR_EN_HVT_V  0x00000001U
#define SYSTEM_COMB_PVT_MONITOR_EN_HVT_S  7

/** SYSTEM_COMB_PVT_ERR_LVT_SITE0_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_LVT_SITE0_REG (DR_REG_SYSTEM_BASE + 0x6c)
/** SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_lvt_site0
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0_M  (SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0_V << SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE0_S  0

/** SYSTEM_COMB_PVT_ERR_NVT_SITE0_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_NVT_SITE0_REG (DR_REG_SYSTEM_BASE + 0x70)
/** SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_nvt_site0
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0_M  (SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0_V << SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE0_S  0

/** SYSTEM_COMB_PVT_ERR_HVT_SITE0_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_HVT_SITE0_REG (DR_REG_SYSTEM_BASE + 0x74)
/** SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_hvt_site0
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0_M  (SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0_V << SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE0_S  0

/** SYSTEM_COMB_PVT_ERR_LVT_SITE1_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_LVT_SITE1_REG (DR_REG_SYSTEM_BASE + 0x78)
/** SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_lvt_site1
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1_M  (SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1_V << SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE1_S  0

/** SYSTEM_COMB_PVT_ERR_NVT_SITE1_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_NVT_SITE1_REG (DR_REG_SYSTEM_BASE + 0x7c)
/** SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_nvt_site1
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1_M  (SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1_V << SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE1_S  0

/** SYSTEM_COMB_PVT_ERR_HVT_SITE1_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_HVT_SITE1_REG (DR_REG_SYSTEM_BASE + 0x80)
/** SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_hvt_site1
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1_M  (SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1_V << SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE1_S  0

/** SYSTEM_COMB_PVT_ERR_LVT_SITE2_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_LVT_SITE2_REG (DR_REG_SYSTEM_BASE + 0x84)
/** SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_lvt_site2
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2_M  (SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2_V << SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE2_S  0

/** SYSTEM_COMB_PVT_ERR_NVT_SITE2_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_NVT_SITE2_REG (DR_REG_SYSTEM_BASE + 0x88)
/** SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_nvt_site2
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2_M  (SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2_V << SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE2_S  0

/** SYSTEM_COMB_PVT_ERR_HVT_SITE2_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_HVT_SITE2_REG (DR_REG_SYSTEM_BASE + 0x8c)
/** SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_hvt_site2
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2_M  (SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2_V << SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE2_S  0

/** SYSTEM_COMB_PVT_ERR_LVT_SITE3_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_LVT_SITE3_REG (DR_REG_SYSTEM_BASE + 0x90)
/** SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_lvt_site3
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3_M  (SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3_V << SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_LVT_SITE3_S  0

/** SYSTEM_COMB_PVT_ERR_NVT_SITE3_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_NVT_SITE3_REG (DR_REG_SYSTEM_BASE + 0x94)
/** SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_nvt_site3
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3_M  (SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3_V << SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_NVT_SITE3_S  0

/** SYSTEM_COMB_PVT_ERR_HVT_SITE3_REG register
 *  mem pvt register
 */
#define SYSTEM_COMB_PVT_ERR_HVT_SITE3_REG (DR_REG_SYSTEM_BASE + 0x98)
/** SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3 : RO; bitpos: [15:0]; default: 0;
 *  reg_comb_timing_err_cnt_hvt_site3
 */
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3    0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3_M  (SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3_V << SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3_S)
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3_V  0x0000FFFFU
#define SYSTEM_COMB_TIMING_ERR_CNT_HVT_SITE3_S  0

/** SYSTEM_REG_DATE_REG register
 *  Version register
 */
#define SYSTEM_REG_DATE_REG (DR_REG_SYSTEM_BASE + 0xffc)
/** SYSTEM_SYSTEM_REG_DATE : R/W; bitpos: [27:0]; default: 34636176;
 *  reg_system_reg_date
 */
#define SYSTEM_SYSTEM_REG_DATE    0x0FFFFFFFU
#define SYSTEM_SYSTEM_REG_DATE_M  (SYSTEM_SYSTEM_REG_DATE_V << SYSTEM_SYSTEM_REG_DATE_S)
#define SYSTEM_SYSTEM_REG_DATE_V  0x0FFFFFFFU
#define SYSTEM_SYSTEM_REG_DATE_S  0

#ifdef __cplusplus
}
#endif
