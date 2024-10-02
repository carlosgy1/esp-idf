/*
 * SPDX-FileCopyrightText: 2021-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */

static const uint8_t ext_adv_pattern_1[] = {
    0x00, 0x02, 0x00, 0x04, 0x00, 0x06, 0x00, 0x08, 0x00, 0x0a,
    0x00, 0x0c, 0x00, 0x0e, 0x00, 0x10, 0x00, 0x12, 0x00, 0x14,
    0x00, 0x16, 0x00, 0x18, 0x00, 0x1a, 0x00, 0x1c, 0x00, 0x1e,
    0x00, 0x20, 0x00, 0x22, 0x00, 0x24, 0x00, 0x26, 0x00, 0x28,
    0x00, 0x2a, 0x00, 0x2c, 0x00, 0x2e, 0x00, 0x30, 0x00, 0x32,
    0x00, 0x34, 0x00, 0x36, 0x00, 0x38, 0x00, 0x3a, 0x00, 0x3c,
    0x00, 0x3e, 0x00, 0x40, 0x00, 0x42, 0x00, 0x44, 0x00, 0x46,
    0x00, 0x48, 0x00, 0x4a, 0x00, 0x4c, 0x00, 0x4e, 0x00, 0x50,
    0x00, 0x52, 0x00, 0x54, 0x00, 0x56, 0x00, 0x58, 0x00, 0x5a,
    0x00, 0x5c, 0x00, 0x5e, 0x00, 0x60, 0x00, 0x62, 0x00, 0x64,
    0x00, 0x66, 0x00, 0x68, 0x00, 0x6a, 0x00, 0x6c, 0x00, 0x6e,
    0x00, 0x70, 0x00, 0x72, 0x00, 0x74, 0x00, 0x76, 0x00, 0x78,
    0x00, 0x7a, 0x00, 0x7c, 0x00, 0x7e, 0x00, 0x80, 0x00, 0x82,
    0x00, 0x84, 0x00, 0x86, 0x00, 0x88, 0x00, 0x8a, 0x00, 0x8c,
    0x00, 0x8e, 0x00, 0x90, 0x00, 0x92, 0x00, 0x94, 0x00, 0x96,
    0x00, 0x98, 0x00, 0x9a, 0x00, 0x9c, 0x00, 0x9e, 0x00, 0xa0,
    0x00, 0xa2, 0x00, 0xa4, 0x00, 0xa6, 0x00, 0xa8, 0x00, 0xaa,
    0x00, 0xac, 0x00, 0xae, 0x00, 0xb0, 0x00, 0xb2, 0x00, 0xb4,
    0x00, 0xb6, 0x00, 0xb8, 0x00, 0xba, 0x00, 0xbc, 0x00, 0xbe,
    0x00, 0xc0, 0x00, 0xc2, 0x00, 0xc4, 0x00, 0xc6, 0x00, 0xc8,
    0x00, 0xca, 0x00, 0xcc, 0x00, 0xce, 0x00, 0xd0, 0x00, 0xd2,
    0x00, 0xd4, 0x00, 0xd6, 0x00, 0xd8, 0x00, 0xda, 0x00, 0xdc,
    0x00, 0xde, 0x00, 0xe0, 0x00, 0xe2, 0x00, 0xe4, 0x00, 0xe6,
    0x00, 0xe8, 0x00, 0xea, 0x00, 0xec, 0x00, 0xee, 0x00, 0xf0,
    0x00, 0xf2, 0x00, 0xf4, 0x00, 0xf6, 0x00, 0xf8, 0x00, 0xfa,
    0x00, 0xfc, 0x00, 0xfe, 0x01, 0x01, 0x01, 0x03, 0x01, 0x05,
    0x01, 0x07, 0x01, 0x09, 0x01, 0x0b, 0x01, 0x0d, 0x01, 0x0f,
    0x01, 0x11, 0x01, 0x13, 0x01, 0x15, 0x01, 0x17, 0x01, 0x19,
    0x01, 0x1b, 0x01, 0x1d, 0x01, 0x1f, 0x01, 0x21, 0x01, 0x23,
    0x01, 0x25, 0x01, 0x27, 0x01, 0x29, 0x01, 0x2b, 0x01, 0x2d,
    0x01, 0x2f, 0x01, 0x31, 0x01, 0x33, 0x01, 0x35, 0x01, 0x37,
    0x01, 0x39, 0x01, 0x3b, 0x01, 0x3d, 0x01, 0x3f, 0x01, 0x41,
    0x01, 0x43, 0x01, 0x45, 0x01, 0x47, 0x01, 0x49, 0x01, 0x4b,
    0x01, 0x4d, 0x01, 0x4f, 0x01, 0x51, 0x01, 0x53, 0x01, 0x55,
    0x01, 0x57, 0x01, 0x59, 0x01, 0x5b, 0x01, 0x5d, 0x01, 0x5f,
    0x01, 0x61, 0x01, 0x63, 0x01, 0x65, 0x01, 0x67, 0x01, 0x69,
    0x01, 0x6b, 0x01, 0x6d, 0x01, 0x6f, 0x01, 0x71, 0x01, 0x73,
    0x01, 0x75, 0x01, 0x77, 0x01, 0x79, 0x01, 0x7b, 0x01, 0x7d,
    0x01, 0x7f, 0x01, 0x81, 0x01, 0x83, 0x01, 0x85, 0x01, 0x87,
    0x01, 0x89, 0x01, 0x8b, 0x01, 0x8d, 0x01, 0x8f, 0x01, 0x91,
    0x01, 0x93, 0x01, 0x95, 0x01, 0x97, 0x01, 0x99, 0x01, 0x9b,
    0x01, 0x9d, 0x01, 0x9f, 0x01, 0xa1, 0x01, 0xa3, 0x01, 0xa5,
    0x01, 0xa7, 0x01, 0xa9, 0x01, 0xab, 0x01, 0xad, 0x01, 0xaf,
    0x01, 0xb1, 0x01, 0xb3, 0x01, 0xb5, 0x01, 0xb7, 0x01, 0xb9,
    0x01, 0xbb, 0x01, 0xbd, 0x01, 0xbf, 0x01, 0xc1, 0x01, 0xc3,
    0x01, 0xc5, 0x01, 0xc7, 0x01, 0xc9, 0x01, 0xcb, 0x01, 0xcd,
    0x01, 0xcf, 0x01, 0xd1, 0x01, 0xd3, 0x01, 0xd5, 0x01, 0xd7,
    0x01, 0xd9, 0x01, 0xdb, 0x01, 0xdd, 0x01, 0xdf, 0x01, 0xe1,
    0x01, 0xe3, 0x01, 0xe5, 0x01, 0xe7, 0x01, 0xe9, 0x01, 0xeb,
    0x01, 0xed, 0x01, 0xef, 0x01, 0xf1, 0x01, 0xf3, 0x01, 0xf5,
    0x01, 0xf7, 0x01, 0xf9, 0x01, 0xfb, 0x01, 0xfd, 0x02, 0x00,
    0x02, 0x02, 0x02, 0x04, 0x02, 0x06, 0x02, 0x08, 0x02, 0x0a,
    0x02, 0x0c, 0x02, 0x0e, 0x02, 0x10, 0x02, 0x12, 0x02, 0x14,
    0x02, 0x16, 0x02, 0x18, 0x02, 0x1a, 0x02, 0x1c, 0x02, 0x1e,
    0x02, 0x20, 0x02, 0x22, 0x02, 0x24, 0x02, 0x26, 0x02, 0x28,
    0x02, 0x2a, 0x02, 0x2c, 0x02, 0x2e, 0x02, 0x30, 0x02, 0x32,
    0x02, 0x34, 0x02, 0x36, 0x02, 0x38, 0x02, 0x3a, 0x02, 0x3c,
    0x02, 0x3e, 0x02, 0x40, 0x02, 0x42, 0x02, 0x44, 0x02, 0x46,
    0x02, 0x48, 0x02, 0x4a, 0x02, 0x4c, 0x02, 0x4e, 0x02, 0x50,
    0x02, 0x52, 0x02, 0x54, 0x02, 0x56, 0x02, 0x58, 0x02, 0x5a,
    0x02, 0x5c, 0x02, 0x5e, 0x02, 0x60, 0x02, 0x62, 0x02, 0x64,
    0x02, 0x66, 0x02, 0x68, 0x02, 0x6a, 0x02, 0x6c, 0x02, 0x6e,
    0x02, 0x70, 0x02, 0x72, 0x02, 0x74, 0x02, 0x76, 0x02, 0x78,
    0x02, 0x7a, 0x02, 0x7c, 0x02, 0x7e, 0x02, 0x80, 0x02, 0x82,
    0x02, 0x84, 0x02, 0x86, 0x02, 0x88, 0x02, 0x8a, 0x02, 0x8c,
    0x02, 0x8e, 0x02, 0x90, 0x02, 0x92, 0x02, 0x94, 0x02, 0x96,
    0x02, 0x98, 0x02, 0x9a, 0x02, 0x9c, 0x02, 0x9e, 0x02, 0xa0,
    0x02, 0xa2, 0x02, 0xa4, 0x02, 0xa6, 0x02, 0xa8, 0x02, 0xaa,
    0x02, 0xac, 0x02, 0xae, 0x02, 0xb0, 0x02, 0xb2, 0x02, 0xb4,
    0x02, 0xb6, 0x02, 0xb8, 0x02, 0xba, 0x02, 0xbc, 0x02, 0xbe,
    0x02, 0xc0, 0x02, 0xc2, 0x02, 0xc4, 0x02, 0xc6, 0x02, 0xc8,
    0x02, 0xca, 0x02, 0xcc, 0x02, 0xce, 0x02, 0xd0, 0x02, 0xd2,
    0x02, 0xd4, 0x02, 0xd6, 0x02, 0xd8, 0x02, 0xda, 0x02, 0xdc,
    0x02, 0xde, 0x02, 0xe0, 0x02, 0xe2, 0x02, 0xe4, 0x02, 0xe6,
    0x02, 0xe8, 0x02, 0xea, 0x02, 0xec, 0x02, 0xee, 0x02, 0xf0,
    0x02, 0xf2, 0x02, 0xf4, 0x02, 0xf6, 0x02, 0xf8, 0x02, 0xfa,
    0x02, 0xfc, 0x02, 0xfe, 0x03, 0x01, 0x03, 0x03, 0x03, 0x05,
    0x03, 0x07, 0x03, 0x09, 0x03, 0x0b, 0x03, 0x0d, 0x03, 0x0f,
    0x03, 0x11, 0x03, 0x13, 0x03, 0x15, 0x03, 0x17, 0x03, 0x19,
    0x03, 0x1b, 0x03, 0x1d, 0x03, 0x1f, 0x03, 0x21, 0x03, 0x23,
    0x03, 0x25, 0x03, 0x27, 0x03, 0x29, 0x03, 0x2b, 0x03, 0x2d,
    0x03, 0x2f, 0x03, 0x31, 0x03, 0x33, 0x03, 0x35, 0x03, 0x37,
    0x03, 0x39, 0x03, 0x3b, 0x03, 0x3d, 0x03, 0x3f, 0x03, 0x41,
    0x03, 0x43, 0x03, 0x45, 0x03, 0x47, 0x03, 0x49, 0x03, 0x4b,
    0x03, 0x4d, 0x03, 0x4f, 0x03, 0x51, 0x03, 0x53, 0x03, 0x55,
    0x03, 0x57, 0x03, 0x59, 0x03, 0x5b, 0x03, 0x5d, 0x03, 0x5f,
    0x03, 0x61, 0x03, 0x63, 0x03, 0x65, 0x03, 0x67, 0x03, 0x69,
    0x03, 0x6b, 0x03, 0x6d, 0x03, 0x6f, 0x03, 0x71, 0x03, 0x73,
    0x03, 0x75, 0x03, 0x77, 0x03, 0x79, 0x03, 0x7b, 0x03, 0x7d,
    0x03, 0x7f, 0x03, 0x81, 0x03, 0x83, 0x03, 0x85, 0x03, 0x87,
    0x03, 0x89, 0x03, 0x8b, 0x03, 0x8d, 0x03, 0x8f, 0x03, 0x91,
    0x03, 0x93, 0x03, 0x95, 0x03, 0x97, 0x03, 0x99, 0x03, 0x9b,
    0x03, 0x9d, 0x03, 0x9f, 0x03, 0xa1, 0x03, 0xa3, 0x03, 0xa5,
    0x03, 0xa7, 0x03, 0xa9, 0x03, 0xab, 0x03, 0xad, 0x03, 0xaf,
    0x03, 0xb1, 0x03, 0xb3, 0x03, 0xb5, 0x03, 0xb7, 0x03, 0xb9,
    0x03, 0xbb, 0x03, 0xbd, 0x03, 0xbf, 0x03, 0xc1, 0x03, 0xc3,
    0x03, 0xc5, 0x03, 0xc7, 0x03, 0xc9, 0x03, 0xcb, 0x03, 0xcd,
    0x03, 0xcf, 0x03, 0xd1, 0x03, 0xd3, 0x03, 0xd5, 0x03, 0xd7,
    0x03, 0xd9, 0x03, 0xdb, 0x03, 0xdd, 0x03, 0xdf, 0x03, 0xe1,
    0x03, 0xe3, 0x03, 0xe5, 0x03, 0xe7, 0x03, 0xe9, 0x03, 0xeb,
    0x03, 0xed, 0x03, 0xef, 0x03, 0xf1, 0x03, 0xf3, 0x03, 0xf5,
    0x03, 0xf7, 0x03, 0xf9, 0x03, 0xfb, 0x03, 0xfd, 0x04, 0x00,
    0x04, 0x02, 0x04, 0x04, 0x04, 0x06, 0x04, 0x08, 0x04, 0x0a,
    0x04, 0x0c, 0x04, 0x0e, 0x04, 0x10, 0x04, 0x12, 0x04, 0x14,
    0x04, 0x16, 0x04, 0x18, 0x04, 0x1a, 0x04, 0x1c, 0x04, 0x1e,
    0x04, 0x20, 0x04, 0x22, 0x04, 0x24, 0x04, 0x26, 0x04, 0x28,
    0x04, 0x2a, 0x04, 0x2c, 0x04, 0x2e, 0x04, 0x30, 0x04, 0x32,
    0x04, 0x34, 0x04, 0x36, 0x04, 0x38, 0x04, 0x3a, 0x04, 0x3c,
    0x04, 0x3e, 0x04, 0x40, 0x04, 0x42, 0x04, 0x44, 0x04, 0x46,
    0x04, 0x48, 0x04, 0x4a, 0x04, 0x4c, 0x04, 0x4e, 0x04, 0x50,
    0x04, 0x52, 0x04, 0x54, 0x04, 0x56, 0x04, 0x58, 0x04, 0x5a,
    0x04, 0x5c, 0x04, 0x5e, 0x04, 0x60, 0x04, 0x62, 0x04, 0x64,
    0x04, 0x66, 0x04, 0x68, 0x04, 0x6a, 0x04, 0x6c, 0x04, 0x6e,
    0x04, 0x70, 0x04, 0x72, 0x04, 0x74, 0x04, 0x76, 0x04, 0x78,
    0x04, 0x7a, 0x04, 0x7c, 0x04, 0x7e, 0x04, 0x80, 0x04, 0x82,
    0x04, 0x84, 0x04, 0x86, 0x04, 0x88, 0x04, 0x8a, 0x04, 0x8c,
    0x04, 0x8e, 0x04, 0x90, 0x04, 0x92, 0x04, 0x94, 0x04, 0x96,
    0x04, 0x98, 0x04, 0x9a, 0x04, 0x9c, 0x04, 0x9e, 0x04, 0xa0,
    0x04, 0xa2, 0x04, 0xa4, 0x04, 0xa6, 0x04, 0xa8, 0x04, 0xaa,
    0x04, 0xac, 0x04, 0xae, 0x04, 0xb0, 0x04, 0xb2, 0x04, 0xb4,
    0x04, 0xb6, 0x04, 0xb8, 0x04, 0xba, 0x04, 0xbc, 0x04, 0xbe,
    0x04, 0xc0, 0x04, 0xc2, 0x04, 0xc4, 0x04, 0xc6, 0x04, 0xc8,
    0x04, 0xca, 0x04, 0xcc, 0x04, 0xce, 0x04, 0xd0, 0x04, 0xd2,
    0x04, 0xd4, 0x04, 0xd6, 0x04, 0xd8, 0x04, 0xda, 0x04, 0xdc,
    0x04, 0xde, 0x04, 0xe0, 0x04, 0xe2, 0x04, 0xe4, 0x04, 0xe6,
    0x04, 0xe8, 0x04, 0xea, 0x04, 0xec, 0x04, 0xee, 0x04, 0xf0,
    0x04, 0xf2, 0x04, 0xf4, 0x04, 0xf6, 0x04, 0xf8, 0x04, 0xfa,
    0x04, 0xfc, 0x04, 0xfe, 0x05, 0x01, 0x05, 0x03, 0x05, 0x05,
    0x05, 0x07, 0x05, 0x09, 0x05, 0x0b, 0x05, 0x0d, 0x05, 0x0f,
    0x05, 0x11, 0x05, 0x13, 0x05, 0x15, 0x05, 0x17, 0x05, 0x19,
    0x05, 0x1b, 0x05, 0x1d, 0x05, 0x1f, 0x05, 0x21, 0x05, 0x23,
    0x05, 0x25, 0x05, 0x27, 0x05, 0x29, 0x05, 0x2b, 0x05, 0x2d,
    0x05, 0x2f, 0x05, 0x31, 0x05, 0x33, 0x05, 0x35, 0x05, 0x37,
    0x05, 0x39, 0x05, 0x3b, 0x05, 0x3d, 0x05, 0x3f, 0x05, 0x41,
    0x05, 0x43, 0x05, 0x45, 0x05, 0x47, 0x05, 0x49, 0x05, 0x4b,
    0x05, 0x4d, 0x05, 0x4f, 0x05, 0x51, 0x05, 0x53, 0x05, 0x55,
    0x05, 0x57, 0x05, 0x59, 0x05, 0x5b, 0x05, 0x5d, 0x05, 0x5f,
    0x05, 0x61, 0x05, 0x63, 0x05, 0x65, 0x05, 0x67, 0x05, 0x69,
    0x05, 0x6b, 0x05, 0x6d, 0x05, 0x6f, 0x05, 0x71, 0x05, 0x73,
    0x05, 0x75, 0x05, 0x77, 0x05, 0x79, 0x05, 0x7b, 0x05, 0x7d,
    0x05, 0x7f, 0x05, 0x81, 0x05, 0x83, 0x05, 0x85, 0x05, 0x87,
    0x05, 0x89, 0x05, 0x8b, 0x05, 0x8d, 0x05, 0x8f, 0x05, 0x91,
    0x05, 0x93, 0x05, 0x95, 0x05, 0x97, 0x05, 0x99, 0x05, 0x9b,
    0x05, 0x9d, 0x05, 0x9f, 0x05, 0xa1, 0x05, 0xa3, 0x05, 0xa5,
    0x05, 0xa7, 0x05, 0xa9, 0x05, 0xab, 0x05, 0xad, 0x05, 0xaf,
    0x05, 0xb1, 0x05, 0xb3, 0x05, 0xb5, 0x05, 0xb7, 0x05, 0xb9,
    0x05, 0xbb, 0x05, 0xbd, 0x05, 0xbf, 0x05, 0xc1, 0x05, 0xc3,
    0x05, 0xc5, 0x05, 0xc7, 0x05, 0xc9, 0x05, 0xcb, 0x05, 0xcd,
    0x05, 0xcf, 0x05, 0xd1, 0x05, 0xd3, 0x05, 0xd5, 0x05, 0xd7,
    0x05, 0xd9, 0x05, 0xdb, 0x05, 0xdd, 0x05, 0xdf, 0x05, 0xe1,
    0x05, 0xe3, 0x05, 0xe5, 0x05, 0xe7, 0x05, 0xe9, 0x05, 0xeb,
    0x05, 0xed, 0x05, 0xef, 0x05, 0xf1, 0x05, 0xf3, 0x05, 0xf5,
    0x05, 0xf7, 0x05, 0xf9, 0x05, 0xfb, 0x05, 0xfd, 0x06, 0x00,
    0x06, 0x02, 0x06, 0x04, 0x06, 0x06, 0x06, 0x08, 0x06, 0x0a,
    0x06, 0x0c, 0x06, 0x0e, 0x06, 0x10, 0x06, 0x12, 0x06, 0x14,
    0x06, 0x16, 0x06, 0x18, 0x06, 0x1a, 0x06, 0x1c, 0x06, 0x1e,
    0x06, 0x20, 0x06, 0x22, 0x06, 0x24, 0x06, 0x26, 0x06, 0x28,
    0x06, 0x2a, 0x06, 0x2c, 0x06, 0x2e, 0x06, 0x30, 0x06, 0x32,
    0x06, 0x34, 0x06, 0x36, 0x06, 0x38, 0x06, 0x3a, 0x06, 0x3c,
    0x06, 0x3e, 0x06, 0x40, 0x06, 0x42, 0x06, 0x44, 0x06, 0x46,
    0x06, 0x48, 0x06, 0x4a, 0x06, 0x4c, 0x06, 0x4e, 0x06, 0x50,
    0x06, 0x52, 0x06, 0x54, 0x06, 0x56, 0x06, 0x58, 0x06, 0x5a,
    0x06, 0x5c, 0x06, 0x5e, 0x06, 0x60, 0x06, 0x62, 0x06, 0x64,
    0x06, 0x66, 0x06, 0x68, 0x06, 0x6a, 0x06, 0x6c, 0x06, 0x6e,
    0x06, 0x70, 0x06, 0x72, 0x06, 0x74, 0x06, 0x76, 0x06, 0x78
};
