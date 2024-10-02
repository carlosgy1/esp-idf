/*
 * SPDX-FileCopyrightText: 2019-2024 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

#define ETS_DS_IV_LEN 16

/* Length of parameter 'C' stored in flash */
#define ETS_DS_C_LEN (12672 / 8)

/* Encrypted ETS data. Recommended to store in flash in this format.
 */
typedef struct {
    /* RSA LENGTH register parameters
     * (number of words in RSA key & operands, minus one).
     *
     * Max value 127 (for RSA 4096).
     *
     * This value must match the length field encrypted and stored in 'c',
     * or invalid results will be returned. (The DS peripheral will
     * always use the value in 'c', not this value, so an attacker can't
     * alter the DS peripheral results this way, it will just truncate or
     * extend the message and the resulting signature in software.)
     */
    unsigned rsa_length;

    /* IV value used to encrypt 'c' */
    uint8_t iv[ETS_DS_IV_LEN];

    /* Encrypted Digital Signature parameters. Result of AES-CBC encryption
       of plaintext values. Includes an encrypted message digest.
    */
    uint8_t c[ETS_DS_C_LEN];
} ets_ds_data_t;

typedef enum {
    ETS_DS_OK,
    ETS_DS_INVALID_PARAM,   /* Supplied parameters are invalid */
    ETS_DS_INVALID_KEY,     /* HMAC peripheral failed to supply key */
    ETS_DS_INVALID_PADDING, /* 'c' decrypted with invalid padding */
    ETS_DS_INVALID_DIGEST,  /* 'c' decrypted with invalid digest */
} ets_ds_result_t;

void ets_ds_enable(void);

void ets_ds_disable(void);

/*
 * @brief Start signing a message (or padded message digest) using the Digital Signature peripheral
 *
 * - @param message Pointer to message (or padded digest) containing the message to sign. Should be
 *   (data->rsa_length + 1)*4 bytes long.  @param data Pointer to DS data. Can be a pointer to data
 *   in flash.
 *
 * Caller must have already called ets_ds_enable() and ets_hmac_calculate_downstream() before calling
 * this function, and is responsible for calling ets_ds_finish_sign() and then
 * ets_hmac_invalidate_downstream() afterwards.
 *
 * @return ETS_DS_OK if signature is in progress, ETS_DS_INVALID_PARAM if param is invalid,
 * EST_DS_INVALID_KEY if key or HMAC peripheral is configured incorrectly.
 */
ets_ds_result_t ets_ds_start_sign(const void *message, const ets_ds_data_t *data);


/*
 * @brief Returns true if the DS peripheral is busy following a call to ets_ds_start_sign()
 *
 * A result of false indicates that a call to ets_ds_finish_sign() will not block.
 *
 * Only valid if ets_ds_enable() has been called.
 */
bool ets_ds_is_busy(void);


/* @brief Finish signing a message using the Digital Signature peripheral
 *
 * Must be called after ets_ds_start_sign(). Can use ets_ds_busy() to wait until
 * peripheral is no longer busy.
 *
 * - @param signature Pointer to buffer to contain the signature. Should be
 *   (data->rsa_length + 1)*4 bytes long.
 * - @param data Should match the 'data' parameter passed to ets_ds_start_sign()
 *
 * @param ETS_DS_OK if signing succeeded, ETS_DS_INVALID_PARAM if param is invalid,
 * ETS_DS_INVALID_DIGEST or ETS_DS_INVALID_PADDING if there is a problem with the
 * encrypted data digest or padding bytes (in case of ETS_DS_INVALID_PADDING, a
 * digest is produced anyhow.)
 */
ets_ds_result_t ets_ds_finish_sign(void *signature, const ets_ds_data_t *data);


/* Plaintext parameters used by Digital Signature.

   Not used for signing with DS peripheral, but can be encrypted
   in-device by calling ets_ds_encrypt_params()
*/
typedef struct {
    uint32_t Y[4096 / 32];
    uint32_t M[4096 / 32];
    uint32_t Rb[4096 / 32];
    uint32_t M_prime;
    uint32_t length;
} ets_ds_p_data_t;

typedef enum {
    ETS_DS_KEY_HMAC, /* The HMAC key (as stored in efuse) */
    ETS_DS_KEY_AES,  /* The AES key (as derived from HMAC key by HMAC peripheral in downstream mode) */
} ets_ds_key_t;

/* @brief Encrypt DS parameters suitable for storing and later use with DS peripheral
 *
 * @param data Output buffer to store encrypted data, suitable for later use generating signatures.
 * @param iv Pointer to 16 byte IV buffer, will be copied into 'data'. Should be randomly generated bytes each time.
 * @param p_data Pointer to input plaintext key data. The expectation is this data will be deleted after this process is done and 'data' is stored.
 * @param key Pointer to 32 bytes of key data. Type determined by key_type parameter. The expectation is the corresponding HMAC key will be stored to efuse and then permanently erased.
 * @param key_type Type of key stored in 'key' (either the AES-256 DS key, or an HMAC DS key from which the AES DS key is derived using HMAC peripheral)
 *
 * @return ETS_DS_INVALID_PARAM if any parameter is invalid, or ETS_DS_OK if 'data' is successfully generated from the input parameters.
 */
ets_ds_result_t ets_ds_encrypt_params(ets_ds_data_t *data, const void *iv, const ets_ds_p_data_t *p_data, const void *key, ets_ds_key_t key_type);

#ifdef __cplusplus
}
#endif
