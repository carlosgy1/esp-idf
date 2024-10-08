/*
 * SPDX-FileCopyrightText: 2017-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "sdkconfig.h"
#include "esp_efuse.h"
#include <assert.h>
#include "esp_efuse_test_table.h"

// md5_digest_table df1ecf346aec29cf593e2f81dc4cd5e4
// This file was generated from the file esp_efuse_test_table.csv. DO NOT CHANGE THIS FILE MANUALLY.
// If you want to change some fields, you need to change esp_efuse_test_table.csv file
// then run `efuse_common_table` or `efuse_custom_table` command it will generate this file.
// To show efuse_table run the command 'show_efuse_table'.

#define MAX_BLK_LEN CONFIG_EFUSE_MAX_BLK_LEN

// The last free bit in the block is counted over the entire file.
#define LAST_FREE_BIT_BLK1 88
#define LAST_FREE_BIT_BLK2 167
#define LAST_FREE_BIT_BLK3 88

_Static_assert(LAST_FREE_BIT_BLK1 <= MAX_BLK_LEN, "The eFuse table does not match the coding scheme. Edit the table and restart the efuse_common_table or efuse_custom_table command to regenerate the new files.");
_Static_assert(LAST_FREE_BIT_BLK2 <= MAX_BLK_LEN, "The eFuse table does not match the coding scheme. Edit the table and restart the efuse_common_table or efuse_custom_table command to regenerate the new files.");
_Static_assert(LAST_FREE_BIT_BLK3 <= MAX_BLK_LEN, "The eFuse table does not match the coding scheme. Edit the table and restart the efuse_common_table or efuse_custom_table command to regenerate the new files.");

static const esp_efuse_desc_t TEST1_LEN_8[] = {
    {EFUSE_BLK3, 0, 8}, 	 // TEST field,
};

static const esp_efuse_desc_t TEST2_LEN_16[] = {
    {EFUSE_BLK3, 10, 8}, 	 // TEST field,
    {EFUSE_BLK3, 80, 8}, 	 // TEST field,
};

static const esp_efuse_desc_t TEST3_LEN_6[] = {
    {EFUSE_BLK3, 22, 6}, 	 // TEST field,
};

static const esp_efuse_desc_t TEST4_LEN_182[] = {
    {EFUSE_BLK1, 22, 49}, 	 // TEST field,
    {EFUSE_BLK2, 128, 39}, 	 // TEST field,
    {EFUSE_BLK1, 71, 17}, 	 // TEST field,
    {EFUSE_BLK1, 19, 1}, 	 // TEST field,
    {EFUSE_BLK1, 0, 16}, 	 // TEST field,
    {EFUSE_BLK2, 0, 17}, 	 // TEST field,
    {EFUSE_BLK2, 60, 43}, 	 // TEST field,
};

static const esp_efuse_desc_t TEST5_LEN_1[] = {
    {EFUSE_BLK1, 16, 1}, 	 // TEST field,
};

static const esp_efuse_desc_t TEST6_LEN_17[] = {
    {EFUSE_BLK1, 17, 1}, 	 // TEST field,
    {EFUSE_BLK2, 17, 2}, 	 // TEST field,
    {EFUSE_BLK3, 29, 4}, 	 // TEST field,
    {EFUSE_BLK2, 31, 3}, 	 // TEST field,
    {EFUSE_BLK3, 60, 6}, 	 // TEST field,
    {EFUSE_BLK2, 127, 1}, 	 // TEST field,
};





const esp_efuse_desc_t* ESP_EFUSE_TEST1_LEN_8[] = {
    &TEST1_LEN_8[0],    		// TEST field
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_TEST2_LEN_16[] = {
    &TEST2_LEN_16[0],    		// TEST field
    &TEST2_LEN_16[1],    		// TEST field
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_TEST3_LEN_6[] = {
    &TEST3_LEN_6[0],    		// TEST field
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_TEST4_LEN_182[] = {
    &TEST4_LEN_182[0],    		// TEST field
    &TEST4_LEN_182[1],    		// TEST field
    &TEST4_LEN_182[2],    		// TEST field
    &TEST4_LEN_182[3],    		// TEST field
    &TEST4_LEN_182[4],    		// TEST field
    &TEST4_LEN_182[5],    		// TEST field
    &TEST4_LEN_182[6],    		// TEST field
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_TEST5_LEN_1[] = {
    &TEST5_LEN_1[0],    		// TEST field
    NULL
};

const esp_efuse_desc_t* ESP_EFUSE_TEST6_LEN_17[] = {
    &TEST6_LEN_17[0],    		// TEST field
    &TEST6_LEN_17[1],    		// TEST field
    &TEST6_LEN_17[2],    		// TEST field
    &TEST6_LEN_17[3],    		// TEST field
    &TEST6_LEN_17[4],    		// TEST field
    &TEST6_LEN_17[5],    		// TEST field
    NULL
};
