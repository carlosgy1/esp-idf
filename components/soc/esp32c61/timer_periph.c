/*
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "soc/timer_periph.h"

const timer_group_signal_conn_t timer_group_periph_signals = {
    .groups = {
        [0] = {
            .module = PERIPH_TIMG0_MODULE,
            .timer_irq_id = {
                [0] = ETS_TG0_T0_INTR_SOURCE,
            }
        },
        [1] = {
            .module = PERIPH_TIMG1_MODULE,
            .timer_irq_id = {
                [0] = ETS_TG1_T0_INTR_SOURCE,
            }
        }
    }
};

/*  Registers in retention context:
 *      TIMG_T0CONFIG_REG
 *      TIMG_T0ALARMLO_REG
 *      TIMG_T0ALARMHI_REG
 *      TIMG_T0LOADLO_REG
 *      TIMG_T0LOADHI_REG
 *      TIMG_INT_ENA_TIMERS_REG
 *      TIMG_REGCLK_REG
 */
#define TG_TIMER_RETENTION_REGS_CNT 7
static const uint32_t tg_timer_regs_map[4] = {0x100000f1, 0x80000000, 0x0, 0x0};

const regdma_entries_config_t tg0_timer_regdma_entries[] = {
    // backup stage: trigger a soft capture
    [0] = {
        .config = REGDMA_LINK_WRITE_INIT(REGDMA_TG0_TIMER_LINK(0x00),
        TIMG_T0UPDATE_REG(0), TIMG_T0_UPDATE, TIMG_T0_UPDATE_M, 0, 1),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: wait for the capture done
    [1] = {
        .config = REGDMA_LINK_WAIT_INIT(REGDMA_TG0_TIMER_LINK(0x01),
        TIMG_T0UPDATE_REG(0), 0x0, TIMG_T0_UPDATE_M, 0, 1),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: save the captured counter value
    // restore stage: store the captured counter value to the loader register
    [2] = {
        .config = REGDMA_LINK_CONTINUOUS_INIT(REGDMA_TG0_TIMER_LINK(0x02),
        TIMG_T0LO_REG(0), TIMG_T0LOADLO_REG(0), 2, 0, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    [3] = {
        .config = REGDMA_LINK_CONTINUOUS_INIT(REGDMA_TG0_TIMER_LINK(0x03),
        TIMG_T0HI_REG(0), TIMG_T0LOADHI_REG(0), 2, 0, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    // restore stage: trigger a soft reload, so the timer can continue from where it was backed up
    [4] = {
        .config = REGDMA_LINK_WRITE_INIT(REGDMA_TG0_TIMER_LINK(0x04),
        TIMG_T0LOAD_REG(0), 0x1, TIMG_T0_LOAD_M, 1, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: save other configuration and status registers
    // restore stage: restore the configuration and status registers
    [5] = {
        .config = REGDMA_LINK_ADDR_MAP_INIT(REGDMA_TG0_TIMER_LINK(0x05),
        TIMG_T0CONFIG_REG(0), TIMG_T0CONFIG_REG(0),
        TG_TIMER_RETENTION_REGS_CNT, 0, 0,
        tg_timer_regs_map[0], tg_timer_regs_map[1],
        tg_timer_regs_map[2], tg_timer_regs_map[3]),
        .owner = TIMG_RETENTION_ENTRY
    },
};

const regdma_entries_config_t tg1_timer_regdma_entries[] = {
    // backup stage: trigger a soft capture
    [0] = {
        .config = REGDMA_LINK_WRITE_INIT(REGDMA_TG1_TIMER_LINK(0x00),
        TIMG_T0UPDATE_REG(1), TIMG_T0_UPDATE, TIMG_T0_UPDATE_M, 0, 1),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: wait for the capture done
    [1] = {
        .config = REGDMA_LINK_WAIT_INIT(REGDMA_TG1_TIMER_LINK(0x01),
        TIMG_T0UPDATE_REG(1), 0x0, TIMG_T0_UPDATE_M, 0, 1),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: save the captured counter value
    // restore stage: store the captured counter value to the loader register
    [2] = {
        .config = REGDMA_LINK_CONTINUOUS_INIT(REGDMA_TG1_TIMER_LINK(0x02),
        TIMG_T0LO_REG(1), TIMG_T0LOADLO_REG(1), 2, 0, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    [3] = {
        .config = REGDMA_LINK_CONTINUOUS_INIT(REGDMA_TG1_TIMER_LINK(0x03),
        TIMG_T0HI_REG(1), TIMG_T0LOADHI_REG(1), 2, 0, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    // restore stage: trigger a soft reload, so the timer can continue from where it was backed up
    [4] = {
        .config = REGDMA_LINK_WRITE_INIT(REGDMA_TG1_TIMER_LINK(0x04),
        TIMG_T0LOAD_REG(1), 0x1, TIMG_T0_LOAD_M, 1, 0),
        .owner = TIMG_RETENTION_ENTRY
    },
    // backup stage: save other configuration and status registers
    // restore stage: restore the configuration and status registers
    [5] = {
        .config = REGDMA_LINK_ADDR_MAP_INIT(REGDMA_TG1_TIMER_LINK(0x05),
        TIMG_T0CONFIG_REG(1), TIMG_T0CONFIG_REG(1),
        TG_TIMER_RETENTION_REGS_CNT, 0, 0,
        tg_timer_regs_map[0], tg_timer_regs_map[1],
        tg_timer_regs_map[2], tg_timer_regs_map[3]),
        .owner = TIMG_RETENTION_ENTRY
    },
};

const tg_timer_reg_retention_info_t tg_timer_reg_retention_info[SOC_TIMER_GROUPS] = {
    [0] = {
        .regdma_entry_array = tg0_timer_regdma_entries,
        .array_size = ARRAY_SIZE(tg0_timer_regdma_entries)
    },
    [1] = {
        .regdma_entry_array = tg1_timer_regdma_entries,
        .array_size = ARRAY_SIZE(tg1_timer_regdma_entries)
    },
};
