/*
 * SPDX-FileCopyrightText: 2015-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */


#include "esp_blufi_api.h"
#include "btc/btc_task.h"
#include "btc_blufi_prf.h"
#include "btc/btc_manage.h"
#include "osi/future.h"
#if (BLUFI_INCLUDED == TRUE)
esp_err_t esp_blufi_register_callbacks(esp_blufi_callbacks_t *callbacks)
{
    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    if (callbacks == NULL) {
        return ESP_FAIL;
    }

    btc_blufi_set_callbacks(callbacks);
    return (btc_profile_cb_set(BTC_PID_BLUFI, callbacks->event_cb) == 0 ? ESP_OK : ESP_FAIL);
}

esp_err_t esp_blufi_send_wifi_conn_report(wifi_mode_t opmode, esp_blufi_sta_conn_state_t sta_conn_state, uint8_t softap_conn_num, esp_blufi_extra_info_t *extra_info)
{
    btc_msg_t msg;
    btc_blufi_args_t arg;

    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_SEND_CFG_REPORT;
    arg.wifi_conn_report.opmode = opmode;
    arg.wifi_conn_report.sta_conn_state = sta_conn_state;
    arg.wifi_conn_report.softap_conn_num = softap_conn_num;
    arg.wifi_conn_report.extra_info = extra_info;

    return (btc_transfer_context(&msg, &arg, sizeof(btc_blufi_args_t), btc_blufi_call_deep_copy,
                btc_blufi_call_deep_free) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}

esp_err_t esp_blufi_send_wifi_list(uint16_t apCount, esp_blufi_ap_record_t *list)
{
    btc_msg_t msg;
    btc_blufi_args_t arg;

    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_SEND_WIFI_LIST;
    arg.wifi_list.apCount = apCount;
    arg.wifi_list.list = list;

    return (btc_transfer_context(&msg, &arg, sizeof(btc_blufi_args_t), btc_blufi_call_deep_copy,
                btc_blufi_call_deep_free) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}

esp_err_t esp_blufi_profile_init(void)
{
    btc_msg_t msg;

    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_INIT;

    return (btc_transfer_context(&msg, NULL, 0, NULL, NULL) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}

esp_err_t esp_blufi_profile_deinit(void)
{
    btc_msg_t msg;

    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_DEINIT;

    return (btc_transfer_context(&msg, NULL, 0, NULL, NULL) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}

uint16_t esp_blufi_get_version(void)
{
    return btc_blufi_get_version();
}

esp_err_t esp_blufi_send_error_info(esp_blufi_error_state_t state)
{
    btc_msg_t msg;
    btc_blufi_args_t arg;

    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_SEND_ERR_INFO;
    arg.blufi_err_infor.state = state;

    return (btc_transfer_context(&msg, &arg, sizeof(btc_blufi_args_t), NULL, NULL) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}

esp_err_t esp_blufi_send_custom_data(uint8_t *data, uint32_t data_len)
{
    btc_msg_t msg;
    btc_blufi_args_t arg;
    if(data == NULL || data_len == 0) {
        return ESP_ERR_INVALID_ARG;
    }
    ESP_BLE_HOST_STATUS_CHECK(ESP_BLE_HOST_STATUS_ENABLED);

    msg.sig = BTC_SIG_API_CALL;
    msg.pid = BTC_PID_BLUFI;
    msg.act = BTC_BLUFI_ACT_SEND_CUSTOM_DATA;
    arg.custom_data.data = data;
    arg.custom_data.data_len = data_len;

    return (btc_transfer_context(&msg, &arg, sizeof(btc_blufi_args_t), btc_blufi_call_deep_copy,
                btc_blufi_call_deep_free) == BT_STATUS_SUCCESS ? ESP_OK : ESP_FAIL);
}
#endif  ///BLUFI_INCLUDED == TRUE
