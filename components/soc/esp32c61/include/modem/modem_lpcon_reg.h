/*
 * SPDX-FileCopyrightText: 2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "modem/reg_base.h"
#ifdef __cplusplus
extern "C" {
#endif

#define MODEM_LPCON_TEST_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x0)
/* MODEM_LPCON_CLK_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_EN    (BIT(0))
#define MODEM_LPCON_CLK_EN_M  (BIT(0))
#define MODEM_LPCON_CLK_EN_V  0x1
#define MODEM_LPCON_CLK_EN_S  0

#define MODEM_LPCON_LP_TIMER_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x4)
/* MODEM_LPCON_CLK_LP_TIMER_DIV_NUM : R/W ;bitpos:[15:4] ;default: 12'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_DIV_NUM    0x00000FFF
#define MODEM_LPCON_CLK_LP_TIMER_DIV_NUM_M  ((MODEM_LPCON_CLK_LP_TIMER_DIV_NUM_V)<<(MODEM_LPCON_CLK_LP_TIMER_DIV_NUM_S))
#define MODEM_LPCON_CLK_LP_TIMER_DIV_NUM_V  0xFFF
#define MODEM_LPCON_CLK_LP_TIMER_DIV_NUM_S  4
/* MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL32K : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL32K    (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL32K_M  (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL32K_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL32K_S  3
/* MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL    (BIT(2))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL_M  (BIT(2))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_SEL_XTAL_S  2
/* MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_FAST : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_FAST    (BIT(1))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_FAST_M  (BIT(1))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_FAST_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_FAST_S  1
/* MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_SLOW : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_SLOW    (BIT(0))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_SLOW_M  (BIT(0))
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_SLOW_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_SEL_OSC_SLOW_S  0

#define MODEM_LPCON_COEX_LP_CLK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x8)
/* MODEM_LPCON_CLK_COEX_LP_DIV_NUM : R/W ;bitpos:[15:4] ;default: 12'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM    0x00000FFF
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_M  ((MODEM_LPCON_CLK_COEX_LP_DIV_NUM_V)<<(MODEM_LPCON_CLK_COEX_LP_DIV_NUM_S))
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_V  0xFFF
#define MODEM_LPCON_CLK_COEX_LP_DIV_NUM_S  4
/* MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K    (BIT(3))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_M  (BIT(3))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_V  0x1
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL32K_S  3
/* MODEM_LPCON_CLK_COEX_LP_SEL_XTAL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL    (BIT(2))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_M  (BIT(2))
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_V  0x1
#define MODEM_LPCON_CLK_COEX_LP_SEL_XTAL_S  2
/* MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST    (BIT(1))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_M  (BIT(1))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_V  0x1
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_FAST_S  1
/* MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW    (BIT(0))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_M  (BIT(0))
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_V  0x1
#define MODEM_LPCON_CLK_COEX_LP_SEL_OSC_SLOW_S  0

#define MODEM_LPCON_WIFI_LP_CLK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0xC)
/* MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM : R/W ;bitpos:[15:4] ;default: 12'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM    0x00000FFF
#define MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM_M  ((MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM_V)<<(MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM_S))
#define MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM_V  0xFFF
#define MODEM_LPCON_CLK_WIFIPWR_LP_DIV_NUM_S  4
/* MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL32K : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL32K    (BIT(3))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL32K_M  (BIT(3))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL32K_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL32K_S  3
/* MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL    (BIT(2))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL_M  (BIT(2))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_XTAL_S  2
/* MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_FAST : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_FAST    (BIT(1))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_FAST_M  (BIT(1))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_FAST_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_FAST_S  1
/* MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_SLOW : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_SLOW    (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_SLOW_M  (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_SLOW_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_LP_SEL_OSC_SLOW_S  0

#define MODEM_LPCON_MODEM_SRC_CLK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x10)
/* MODEM_LPCON_MODEM_PWR_CLK_SRC_FO : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_MODEM_PWR_CLK_SRC_FO    (BIT(2))
#define MODEM_LPCON_MODEM_PWR_CLK_SRC_FO_M  (BIT(2))
#define MODEM_LPCON_MODEM_PWR_CLK_SRC_FO_V  0x1
#define MODEM_LPCON_MODEM_PWR_CLK_SRC_FO_S  2
/* MODEM_LPCON_CLK_MODEM_AON_FORCE : R/W ;bitpos:[1:0] ;default: 2'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_MODEM_AON_FORCE    0x00000003
#define MODEM_LPCON_CLK_MODEM_AON_FORCE_M  ((MODEM_LPCON_CLK_MODEM_AON_FORCE_V)<<(MODEM_LPCON_CLK_MODEM_AON_FORCE_S))
#define MODEM_LPCON_CLK_MODEM_AON_FORCE_V  0x3
#define MODEM_LPCON_CLK_MODEM_AON_FORCE_S  0

#define MODEM_LPCON_MODEM_32K_CLK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x14)
/* MODEM_LPCON_CLK_MODEM_32K_SEL : R/W ;bitpos:[1:0] ;default: 2'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_MODEM_32K_SEL    0x00000003
#define MODEM_LPCON_CLK_MODEM_32K_SEL_M  ((MODEM_LPCON_CLK_MODEM_32K_SEL_V)<<(MODEM_LPCON_CLK_MODEM_32K_SEL_S))
#define MODEM_LPCON_CLK_MODEM_32K_SEL_V  0x3
#define MODEM_LPCON_CLK_MODEM_32K_SEL_S  0

#define MODEM_LPCON_CLK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x18)
/* MODEM_LPCON_CLK_LP_TIMER_EN : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_EN    (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_EN_M  (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_EN_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_EN_S  3
/* MODEM_LPCON_CLK_I2C_MST_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_I2C_MST_EN    (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_EN_M  (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_EN_V  0x1
#define MODEM_LPCON_CLK_I2C_MST_EN_S  2
/* MODEM_LPCON_CLK_COEX_EN : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_EN    (BIT(1))
#define MODEM_LPCON_CLK_COEX_EN_M  (BIT(1))
#define MODEM_LPCON_CLK_COEX_EN_V  0x1
#define MODEM_LPCON_CLK_COEX_EN_S  1
/* MODEM_LPCON_CLK_WIFIPWR_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_EN    (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_EN_M  (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_EN_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_EN_S  0

#define MODEM_LPCON_CLK_CONF_FORCE_ON_REG          (DR_REG_MODEM_LPCON_BASE + 0x1C)
/* MODEM_LPCON_CLK_FE_MEM_FO : R/W ;bitpos:[4] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_FE_MEM_FO    (BIT(4))
#define MODEM_LPCON_CLK_FE_MEM_FO_M  (BIT(4))
#define MODEM_LPCON_CLK_FE_MEM_FO_V  0x1
#define MODEM_LPCON_CLK_FE_MEM_FO_S  4
/* MODEM_LPCON_CLK_LP_TIMER_FO : R/W ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_TIMER_FO    (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_FO_M  (BIT(3))
#define MODEM_LPCON_CLK_LP_TIMER_FO_V  0x1
#define MODEM_LPCON_CLK_LP_TIMER_FO_S  3
/* MODEM_LPCON_CLK_I2C_MST_FO : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_I2C_MST_FO    (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_FO_M  (BIT(2))
#define MODEM_LPCON_CLK_I2C_MST_FO_V  0x1
#define MODEM_LPCON_CLK_I2C_MST_FO_S  2
/* MODEM_LPCON_CLK_COEX_FO : R/W ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_FO    (BIT(1))
#define MODEM_LPCON_CLK_COEX_FO_M  (BIT(1))
#define MODEM_LPCON_CLK_COEX_FO_V  0x1
#define MODEM_LPCON_CLK_COEX_FO_S  1
/* MODEM_LPCON_CLK_WIFIPWR_FO : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_FO    (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_FO_M  (BIT(0))
#define MODEM_LPCON_CLK_WIFIPWR_FO_V  0x1
#define MODEM_LPCON_CLK_WIFIPWR_FO_S  0

#define MODEM_LPCON_CLK_CONF_POWER_ST_REG          (DR_REG_MODEM_LPCON_BASE + 0x20)
/* MODEM_LPCON_CLK_LP_APB_ST_MAP : R/W ;bitpos:[31:28] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_LP_APB_ST_MAP    0x0000000F
#define MODEM_LPCON_CLK_LP_APB_ST_MAP_M  ((MODEM_LPCON_CLK_LP_APB_ST_MAP_V)<<(MODEM_LPCON_CLK_LP_APB_ST_MAP_S))
#define MODEM_LPCON_CLK_LP_APB_ST_MAP_V  0xF
#define MODEM_LPCON_CLK_LP_APB_ST_MAP_S  28
/* MODEM_LPCON_CLK_I2C_MST_ST_MAP : R/W ;bitpos:[27:24] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_I2C_MST_ST_MAP    0x0000000F
#define MODEM_LPCON_CLK_I2C_MST_ST_MAP_M  ((MODEM_LPCON_CLK_I2C_MST_ST_MAP_V)<<(MODEM_LPCON_CLK_I2C_MST_ST_MAP_S))
#define MODEM_LPCON_CLK_I2C_MST_ST_MAP_V  0xF
#define MODEM_LPCON_CLK_I2C_MST_ST_MAP_S  24
/* MODEM_LPCON_CLK_COEX_ST_MAP : R/W ;bitpos:[23:20] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_COEX_ST_MAP    0x0000000F
#define MODEM_LPCON_CLK_COEX_ST_MAP_M  ((MODEM_LPCON_CLK_COEX_ST_MAP_V)<<(MODEM_LPCON_CLK_COEX_ST_MAP_S))
#define MODEM_LPCON_CLK_COEX_ST_MAP_V  0xF
#define MODEM_LPCON_CLK_COEX_ST_MAP_S  20
/* MODEM_LPCON_CLK_WIFIPWR_ST_MAP : R/W ;bitpos:[19:16] ;default: 4'h0 ; */
/*description: .*/
#define MODEM_LPCON_CLK_WIFIPWR_ST_MAP    0x0000000F
#define MODEM_LPCON_CLK_WIFIPWR_ST_MAP_M  ((MODEM_LPCON_CLK_WIFIPWR_ST_MAP_V)<<(MODEM_LPCON_CLK_WIFIPWR_ST_MAP_S))
#define MODEM_LPCON_CLK_WIFIPWR_ST_MAP_V  0xF
#define MODEM_LPCON_CLK_WIFIPWR_ST_MAP_S  16

#define MODEM_LPCON_RST_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x24)
/* MODEM_LPCON_RST_LP_TIMER : WO ;bitpos:[3] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_RST_LP_TIMER    (BIT(3))
#define MODEM_LPCON_RST_LP_TIMER_M  (BIT(3))
#define MODEM_LPCON_RST_LP_TIMER_V  0x1
#define MODEM_LPCON_RST_LP_TIMER_S  3
/* MODEM_LPCON_RST_I2C_MST : WO ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_RST_I2C_MST    (BIT(2))
#define MODEM_LPCON_RST_I2C_MST_M  (BIT(2))
#define MODEM_LPCON_RST_I2C_MST_V  0x1
#define MODEM_LPCON_RST_I2C_MST_S  2
/* MODEM_LPCON_RST_COEX : WO ;bitpos:[1] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_RST_COEX    (BIT(1))
#define MODEM_LPCON_RST_COEX_M  (BIT(1))
#define MODEM_LPCON_RST_COEX_V  0x1
#define MODEM_LPCON_RST_COEX_S  1
/* MODEM_LPCON_RST_WIFIPWR : WO ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_RST_WIFIPWR    (BIT(0))
#define MODEM_LPCON_RST_WIFIPWR_M  (BIT(0))
#define MODEM_LPCON_RST_WIFIPWR_V  0x1
#define MODEM_LPCON_RST_WIFIPWR_S  0

#define MODEM_LPCON_TICK_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x28)
/* MODEM_LPCON_MODEM_PWR_TICK_TARGET : R/W ;bitpos:[5:0] ;default: 6'd39 ; */
/*description: .*/
#define MODEM_LPCON_MODEM_PWR_TICK_TARGET    0x0000003F
#define MODEM_LPCON_MODEM_PWR_TICK_TARGET_M  ((MODEM_LPCON_MODEM_PWR_TICK_TARGET_V)<<(MODEM_LPCON_MODEM_PWR_TICK_TARGET_S))
#define MODEM_LPCON_MODEM_PWR_TICK_TARGET_V  0x3F
#define MODEM_LPCON_MODEM_PWR_TICK_TARGET_S  0

#define MODEM_LPCON_MEM_CONF_REG          (DR_REG_MODEM_LPCON_BASE + 0x2C)
/* MODEM_LPCON_CHAN_FREQ_MEM_FORCE : R/W ;bitpos:[23] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE    (BIT(23))
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_M  (BIT(23))
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_V  0x1
#define MODEM_LPCON_CHAN_FREQ_MEM_FORCE_S  23
/* MODEM_LPCON_CHAN_FREQ_MEM_MODE : R/W ;bitpos:[22:20] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_CHAN_FREQ_MEM_MODE    0x00000007
#define MODEM_LPCON_CHAN_FREQ_MEM_MODE_M  ((MODEM_LPCON_CHAN_FREQ_MEM_MODE_V)<<(MODEM_LPCON_CHAN_FREQ_MEM_MODE_S))
#define MODEM_LPCON_CHAN_FREQ_MEM_MODE_V  0x7
#define MODEM_LPCON_CHAN_FREQ_MEM_MODE_S  20
/* MODEM_LPCON_I2C_MST_MEM_FORCE : R/W ;bitpos:[19] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_I2C_MST_MEM_FORCE    (BIT(19))
#define MODEM_LPCON_I2C_MST_MEM_FORCE_M  (BIT(19))
#define MODEM_LPCON_I2C_MST_MEM_FORCE_V  0x1
#define MODEM_LPCON_I2C_MST_MEM_FORCE_S  19
/* MODEM_LPCON_I2C_MST_MEM_MODE : R/W ;bitpos:[18:16] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_I2C_MST_MEM_MODE    0x00000007
#define MODEM_LPCON_I2C_MST_MEM_MODE_M  ((MODEM_LPCON_I2C_MST_MEM_MODE_V)<<(MODEM_LPCON_I2C_MST_MEM_MODE_S))
#define MODEM_LPCON_I2C_MST_MEM_MODE_V  0x7
#define MODEM_LPCON_I2C_MST_MEM_MODE_S  16
/* MODEM_LPCON_BC_MEM_FORCE : R/W ;bitpos:[15] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_BC_MEM_FORCE    (BIT(15))
#define MODEM_LPCON_BC_MEM_FORCE_M  (BIT(15))
#define MODEM_LPCON_BC_MEM_FORCE_V  0x1
#define MODEM_LPCON_BC_MEM_FORCE_S  15
/* MODEM_LPCON_BC_MEM_MODE : R/W ;bitpos:[14:12] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_BC_MEM_MODE    0x00000007
#define MODEM_LPCON_BC_MEM_MODE_M  ((MODEM_LPCON_BC_MEM_MODE_V)<<(MODEM_LPCON_BC_MEM_MODE_S))
#define MODEM_LPCON_BC_MEM_MODE_V  0x7
#define MODEM_LPCON_BC_MEM_MODE_S  12
/* MODEM_LPCON_PBUS_MEM_FORCE : R/W ;bitpos:[11] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_PBUS_MEM_FORCE    (BIT(11))
#define MODEM_LPCON_PBUS_MEM_FORCE_M  (BIT(11))
#define MODEM_LPCON_PBUS_MEM_FORCE_V  0x1
#define MODEM_LPCON_PBUS_MEM_FORCE_S  11
/* MODEM_LPCON_PBUS_MEM_MODE : R/W ;bitpos:[10:8] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_PBUS_MEM_MODE    0x00000007
#define MODEM_LPCON_PBUS_MEM_MODE_M  ((MODEM_LPCON_PBUS_MEM_MODE_V)<<(MODEM_LPCON_PBUS_MEM_MODE_S))
#define MODEM_LPCON_PBUS_MEM_MODE_V  0x7
#define MODEM_LPCON_PBUS_MEM_MODE_S  8
/* MODEM_LPCON_AGC_MEM_FORCE : R/W ;bitpos:[7] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_AGC_MEM_FORCE    (BIT(7))
#define MODEM_LPCON_AGC_MEM_FORCE_M  (BIT(7))
#define MODEM_LPCON_AGC_MEM_FORCE_V  0x1
#define MODEM_LPCON_AGC_MEM_FORCE_S  7
/* MODEM_LPCON_AGC_MEM_MODE : R/W ;bitpos:[6:4] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_AGC_MEM_MODE    0x00000007
#define MODEM_LPCON_AGC_MEM_MODE_M  ((MODEM_LPCON_AGC_MEM_MODE_V)<<(MODEM_LPCON_AGC_MEM_MODE_S))
#define MODEM_LPCON_AGC_MEM_MODE_V  0x7
#define MODEM_LPCON_AGC_MEM_MODE_S  4
/* MODEM_LPCON_DC_MEM_FORCE : R/W ;bitpos:[3] ;default: 1'b1 ; */
/*description: .*/
#define MODEM_LPCON_DC_MEM_FORCE    (BIT(3))
#define MODEM_LPCON_DC_MEM_FORCE_M  (BIT(3))
#define MODEM_LPCON_DC_MEM_FORCE_V  0x1
#define MODEM_LPCON_DC_MEM_FORCE_S  3
/* MODEM_LPCON_DC_MEM_MODE : R/W ;bitpos:[2:0] ;default: 3'b0 ; */
/*description: .*/
#define MODEM_LPCON_DC_MEM_MODE    0x00000007
#define MODEM_LPCON_DC_MEM_MODE_M  ((MODEM_LPCON_DC_MEM_MODE_V)<<(MODEM_LPCON_DC_MEM_MODE_S))
#define MODEM_LPCON_DC_MEM_MODE_V  0x7
#define MODEM_LPCON_DC_MEM_MODE_S  0

#define MODEM_LPCON_MEM_RF1_AUX_CTRL_REG          (DR_REG_MODEM_LPCON_BASE + 0x30)
/* MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h00002070 ; */
/*description: .*/
#define MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL    0xFFFFFFFF
#define MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL_M  ((MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL_V)<<(MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL_S))
#define MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL_V  0xFFFFFFFF
#define MODEM_LPCON_MODEM_PWR_RF1_AUX_CTRL_S  0

#define MODEM_LPCON_MEM_RF2_AUX_CTRL_REG          (DR_REG_MODEM_LPCON_BASE + 0x34)
/* MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL : R/W ;bitpos:[31:0] ;default: 32'h0 ; */
/*description: .*/
#define MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL    0xFFFFFFFF
#define MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL_M  ((MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL_V)<<(MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL_S))
#define MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL_V  0xFFFFFFFF
#define MODEM_LPCON_MODEM_PWR_RF2_AUX_CTRL_S  0

#define MODEM_LPCON_APB_MEM_SEL_REG          (DR_REG_MODEM_LPCON_BASE + 0x38)
/* MODEM_LPCON_AGC_MEM_EN : R/W ;bitpos:[2] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_AGC_MEM_EN    (BIT(2))
#define MODEM_LPCON_AGC_MEM_EN_M  (BIT(2))
#define MODEM_LPCON_AGC_MEM_EN_V  0x1
#define MODEM_LPCON_AGC_MEM_EN_S  2
/* MODEM_LPCON_PBUS_MEM_EN : R/W ;bitpos:[1] ;default: 'b0 ; */
/*description: .*/
#define MODEM_LPCON_PBUS_MEM_EN    (BIT(1))
#define MODEM_LPCON_PBUS_MEM_EN_M  (BIT(1))
#define MODEM_LPCON_PBUS_MEM_EN_V  0x1
#define MODEM_LPCON_PBUS_MEM_EN_S  1
/* MODEM_LPCON_CHAN_FREQ_MEM_EN : R/W ;bitpos:[0] ;default: 1'b0 ; */
/*description: .*/
#define MODEM_LPCON_CHAN_FREQ_MEM_EN    (BIT(0))
#define MODEM_LPCON_CHAN_FREQ_MEM_EN_M  (BIT(0))
#define MODEM_LPCON_CHAN_FREQ_MEM_EN_V  0x1
#define MODEM_LPCON_CHAN_FREQ_MEM_EN_S  0

#define MODEM_LPCON_DATE_REG          (DR_REG_MODEM_LPCON_BASE + 0x3C)
/* MODEM_LPCON_DATE : R/W ;bitpos:[27:0] ;default: 28'h2311220 ; */
/*description: .*/
#define MODEM_LPCON_DATE    0x0FFFFFFF
#define MODEM_LPCON_DATE_M  ((MODEM_LPCON_DATE_V)<<(MODEM_LPCON_DATE_S))
#define MODEM_LPCON_DATE_V  0xFFFFFFF
#define MODEM_LPCON_DATE_S  0

#ifdef __cplusplus
}
#endif
