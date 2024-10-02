/* main.c - Application main entry point */

/*
 * SPDX-FileCopyrightText: 2017 Intel Corporation
 * SPDX-FileContributor: 2018-2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#include "esp_log.h"
#include "nvs_flash.h"

#include "esp_ble_mesh_defs.h"
#include "esp_ble_mesh_common_api.h"
#include "esp_ble_mesh_networking_api.h"
#include "esp_ble_mesh_provisioning_api.h"
#include "esp_ble_mesh_config_model_api.h"
#include "esp_ble_mesh_generic_model_api.h"
#include "esp_ble_mesh_local_data_operation_api.h"
#if CONFIG_BLE_MESH_RPR_SRV
#include "esp_ble_mesh_rpr_model_api.h"
#endif

#include "board.h"
#include "ble_mesh_example_init.h"

#define TAG "EXAMPLE"

#define CID_ESP 0x02E5

static uint8_t dev_uuid[16] = { 0x55, 0xaa };

static esp_ble_mesh_cfg_srv_t config_server = {
    /* 3 transmissions with 20ms interval */
    .net_transmit = ESP_BLE_MESH_TRANSMIT(2, 20),
    .relay = ESP_BLE_MESH_RELAY_ENABLED,
    .relay_retransmit = ESP_BLE_MESH_TRANSMIT(2, 20),
    .beacon = ESP_BLE_MESH_BEACON_ENABLED,
#if defined(CONFIG_BLE_MESH_GATT_PROXY_SERVER)
    .gatt_proxy = ESP_BLE_MESH_GATT_PROXY_ENABLED,
#else
    .gatt_proxy = ESP_BLE_MESH_GATT_PROXY_NOT_SUPPORTED,
#endif
#if defined(CONFIG_BLE_MESH_FRIEND)
    .friend_state = ESP_BLE_MESH_FRIEND_ENABLED,
#else
    .friend_state = ESP_BLE_MESH_FRIEND_NOT_SUPPORTED,
#endif
    .default_ttl = 7,
};

ESP_BLE_MESH_MODEL_PUB_DEFINE(onoff_pub_0, 2 + 3, ROLE_NODE);
static esp_ble_mesh_gen_onoff_srv_t onoff_server_0 = {
    .rsp_ctrl = {
        .get_auto_rsp = ESP_BLE_MESH_SERVER_AUTO_RSP,
        .set_auto_rsp = ESP_BLE_MESH_SERVER_AUTO_RSP,
    },
};

ESP_BLE_MESH_MODEL_PUB_DEFINE(onoff_pub_1, 2 + 3, ROLE_NODE);
static esp_ble_mesh_gen_onoff_srv_t onoff_server_1 = {
    .rsp_ctrl = {
        .get_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
        .set_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
    },
};

ESP_BLE_MESH_MODEL_PUB_DEFINE(onoff_pub_2, 2 + 3, ROLE_NODE);
static esp_ble_mesh_gen_onoff_srv_t onoff_server_2 = {
    .rsp_ctrl = {
        .get_auto_rsp = ESP_BLE_MESH_SERVER_AUTO_RSP,
        .set_auto_rsp = ESP_BLE_MESH_SERVER_RSP_BY_APP,
    },
};

static esp_ble_mesh_model_t root_models[] = {
#if CONFIG_BLE_MESH_RPR_SRV
    ESP_BLE_MESH_MODEL_RPR_SRV(NULL),
#endif
    ESP_BLE_MESH_MODEL_CFG_SRV(&config_server),
    ESP_BLE_MESH_MODEL_GEN_ONOFF_SRV(&onoff_pub_0, &onoff_server_0),
};

static esp_ble_mesh_model_t extend_model_0[] = {
    ESP_BLE_MESH_MODEL_GEN_ONOFF_SRV(&onoff_pub_1, &onoff_server_1),
};

static esp_ble_mesh_model_t extend_model_1[] = {
    ESP_BLE_MESH_MODEL_GEN_ONOFF_SRV(&onoff_pub_2, &onoff_server_2),
};

static esp_ble_mesh_elem_t elements[] = {
    ESP_BLE_MESH_ELEMENT(0, root_models, ESP_BLE_MESH_MODEL_NONE),
    ESP_BLE_MESH_ELEMENT(0, extend_model_0, ESP_BLE_MESH_MODEL_NONE),
    ESP_BLE_MESH_ELEMENT(0, extend_model_1, ESP_BLE_MESH_MODEL_NONE),
};

static esp_ble_mesh_comp_t composition = {
    .cid = CID_ESP,
    .element_count = ARRAY_SIZE(elements),
    .elements = elements,
};

/* Disable OOB security for SILabs Android app */
static esp_ble_mesh_prov_t provision = {
    .uuid = dev_uuid,
#if 0
    .output_size = 4,
    .output_actions = ESP_BLE_MESH_DISPLAY_NUMBER,
    .input_size = 4,
    .input_actions = ESP_BLE_MESH_PUSH,
#else
    .output_size = 0,
    .output_actions = 0,
#endif
};

static void prov_complete(uint16_t net_idx, uint16_t addr, uint8_t flags, uint32_t iv_index)
{
    ESP_LOGI(TAG, "net_idx: 0x%04x, addr: 0x%04x", net_idx, addr);
    ESP_LOGI(TAG, "flags: 0x%02x, iv_index: 0x%08" PRIx32, flags, iv_index);
}

static void example_change_led_state(esp_ble_mesh_model_t *model,
                                     esp_ble_mesh_msg_ctx_t *ctx, uint8_t onoff)
{
    uint16_t primary_addr = esp_ble_mesh_get_primary_element_address();
    uint8_t elem_count = esp_ble_mesh_get_element_count();
    uint8_t rgb[3] = {0};
    uint8_t i;

    if (ESP_BLE_MESH_ADDR_IS_UNICAST(ctx->recv_dst)) {
        for (i = 0; i < elem_count; i++) {
            if (ctx->recv_dst == (primary_addr + i)) {
                rgb[i] = onoff ? LED_ON : LED_OFF;
            }
        }
    } else if (ESP_BLE_MESH_ADDR_IS_GROUP(ctx->recv_dst)) {
        if (esp_ble_mesh_is_model_subscribed_to_group(model, ctx->recv_dst)) {
            rgb[model->element->element_addr - primary_addr] = onoff ? LED_ON : LED_OFF;
        }
    } else if (ctx->recv_dst == 0xFFFF) {
        rgb[0] = onoff ? LED_ON : LED_OFF;
        rgb[1] = onoff ? LED_ON : LED_OFF;
        rgb[2] = onoff ? LED_ON : LED_OFF;
    }

    board_led_operation(rgb[0], rgb[1], rgb[2]);
}

static void example_handle_gen_onoff_msg(esp_ble_mesh_model_t *model,
                                         esp_ble_mesh_msg_ctx_t *ctx,
                                         esp_ble_mesh_server_recv_gen_onoff_set_t *set)
{
    esp_ble_mesh_gen_onoff_srv_t *srv = (esp_ble_mesh_gen_onoff_srv_t *)model->user_data;

    switch (ctx->recv_op) {
    case ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_GET:
        esp_ble_mesh_server_model_send_msg(model, ctx,
            ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_STATUS, sizeof(srv->state.onoff), &srv->state.onoff);
        break;
    case ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET:
    case ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET_UNACK:
        if (set->op_en == false) {
            srv->state.onoff = set->onoff;
        } else {
            /* TODO: Delay and state transition */
            srv->state.onoff = set->onoff;
        }
        if (ctx->recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET) {
            esp_ble_mesh_server_model_send_msg(model, ctx,
                ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_STATUS, sizeof(srv->state.onoff), &srv->state.onoff);
        }
        esp_ble_mesh_model_publish(model, ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_STATUS,
            sizeof(srv->state.onoff), &srv->state.onoff, ROLE_NODE);
        example_change_led_state(model, ctx, srv->state.onoff);
        break;
    default:
        break;
    }
}

static void example_ble_mesh_provisioning_cb(esp_ble_mesh_prov_cb_event_t event,
                                             esp_ble_mesh_prov_cb_param_t *param)
{
    switch (event) {
    case ESP_BLE_MESH_PROV_REGISTER_COMP_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_PROV_REGISTER_COMP_EVT, err_code %d", param->prov_register_comp.err_code);
        break;
    case ESP_BLE_MESH_NODE_PROV_ENABLE_COMP_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_PROV_ENABLE_COMP_EVT, err_code %d", param->node_prov_enable_comp.err_code);
        break;
    case ESP_BLE_MESH_NODE_PROV_LINK_OPEN_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_PROV_LINK_OPEN_EVT, bearer %s",
            param->node_prov_link_open.bearer == ESP_BLE_MESH_PROV_ADV ? "PB-ADV" : "PB-GATT");
        board_led_operation(LED_OFF, LED_ON, LED_OFF);
        break;
    case ESP_BLE_MESH_NODE_PROV_LINK_CLOSE_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_PROV_LINK_CLOSE_EVT, bearer %s",
            param->node_prov_link_close.bearer == ESP_BLE_MESH_PROV_ADV ? "PB-ADV" : "PB-GATT");
        break;
    case ESP_BLE_MESH_NODE_PROV_COMPLETE_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_PROV_COMPLETE_EVT");
        prov_complete(param->node_prov_complete.net_idx, param->node_prov_complete.addr,
            param->node_prov_complete.flags, param->node_prov_complete.iv_index);
        break;
    case ESP_BLE_MESH_NODE_PROV_RESET_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_PROV_RESET_EVT");
        break;
    case ESP_BLE_MESH_NODE_SET_UNPROV_DEV_NAME_COMP_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_NODE_SET_UNPROV_DEV_NAME_COMP_EVT, err_code %d", param->node_set_unprov_dev_name_comp.err_code);
        break;
    default:
        break;
    }
}

static void example_ble_mesh_generic_server_cb(esp_ble_mesh_generic_server_cb_event_t event,
                                               esp_ble_mesh_generic_server_cb_param_t *param)
{
    esp_ble_mesh_gen_onoff_srv_t *srv;
    ESP_LOGI(TAG, "event 0x%02x, opcode 0x%04" PRIx32 ", src 0x%04x, dst 0x%04x",
        event, param->ctx.recv_op, param->ctx.addr, param->ctx.recv_dst);

    switch (event) {
    case ESP_BLE_MESH_GENERIC_SERVER_STATE_CHANGE_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_GENERIC_SERVER_STATE_CHANGE_EVT");
        if (param->ctx.recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET ||
            param->ctx.recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET_UNACK) {
            ESP_LOGI(TAG, "onoff 0x%02x", param->value.state_change.onoff_set.onoff);
            example_change_led_state(param->model, &param->ctx, param->value.state_change.onoff_set.onoff);
        }
        break;
    case ESP_BLE_MESH_GENERIC_SERVER_RECV_GET_MSG_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_GENERIC_SERVER_RECV_GET_MSG_EVT");
        if (param->ctx.recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_GET) {
            srv = (esp_ble_mesh_gen_onoff_srv_t *)param->model->user_data;
            ESP_LOGI(TAG, "onoff 0x%02x", srv->state.onoff);
            example_handle_gen_onoff_msg(param->model, &param->ctx, NULL);
        }
        break;
    case ESP_BLE_MESH_GENERIC_SERVER_RECV_SET_MSG_EVT:
        ESP_LOGI(TAG, "ESP_BLE_MESH_GENERIC_SERVER_RECV_SET_MSG_EVT");
        if (param->ctx.recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET ||
            param->ctx.recv_op == ESP_BLE_MESH_MODEL_OP_GEN_ONOFF_SET_UNACK) {
            ESP_LOGI(TAG, "onoff 0x%02x, tid 0x%02x", param->value.set.onoff.onoff, param->value.set.onoff.tid);
            if (param->value.set.onoff.op_en) {
                ESP_LOGI(TAG, "trans_time 0x%02x, delay 0x%02x",
                    param->value.set.onoff.trans_time, param->value.set.onoff.delay);
            }
            example_handle_gen_onoff_msg(param->model, &param->ctx, &param->value.set.onoff);
        }
        break;
    default:
        ESP_LOGE(TAG, "Unknown Generic Server event 0x%02x", event);
        break;
    }
}

static void example_ble_mesh_config_server_cb(esp_ble_mesh_cfg_server_cb_event_t event,
                                              esp_ble_mesh_cfg_server_cb_param_t *param)
{
    if (event == ESP_BLE_MESH_CFG_SERVER_STATE_CHANGE_EVT) {
        switch (param->ctx.recv_op) {
        case ESP_BLE_MESH_MODEL_OP_APP_KEY_ADD:
            ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_APP_KEY_ADD");
            ESP_LOGI(TAG, "net_idx 0x%04x, app_idx 0x%04x",
                param->value.state_change.appkey_add.net_idx,
                param->value.state_change.appkey_add.app_idx);
            ESP_LOG_BUFFER_HEX("AppKey", param->value.state_change.appkey_add.app_key, 16);
            break;
        case ESP_BLE_MESH_MODEL_OP_MODEL_APP_BIND:
            ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_MODEL_APP_BIND");
            ESP_LOGI(TAG, "elem_addr 0x%04x, app_idx 0x%04x, cid 0x%04x, mod_id 0x%04x",
                param->value.state_change.mod_app_bind.element_addr,
                param->value.state_change.mod_app_bind.app_idx,
                param->value.state_change.mod_app_bind.company_id,
                param->value.state_change.mod_app_bind.model_id);
                board_led_operation(LED_OFF, LED_OFF, LED_OFF);
            break;
        case ESP_BLE_MESH_MODEL_OP_MODEL_SUB_ADD:
            ESP_LOGI(TAG, "ESP_BLE_MESH_MODEL_OP_MODEL_SUB_ADD");
            ESP_LOGI(TAG, "elem_addr 0x%04x, sub_addr 0x%04x, cid 0x%04x, mod_id 0x%04x",
                param->value.state_change.mod_sub_add.element_addr,
                param->value.state_change.mod_sub_add.sub_addr,
                param->value.state_change.mod_sub_add.company_id,
                param->value.state_change.mod_sub_add.model_id);
            break;
        default:
            break;
        }
    }
}

static void print_scan_start_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "scan_start, element_idx 0x%02x", param->scan_start.model->element_idx);
    ESP_LOGI(TAG, "scan_start, model_idx 0x%02x", param->scan_start.model->model_idx);
    ESP_LOGI(TAG, "scan_start, scan_items_limit 0x%02x", param->scan_start.scan_items_limit);
    ESP_LOGI(TAG, "scan_start, timeout 0x%02x", param->scan_start.timeout);
    ESP_LOGI(TAG, "scan_start, net_idx 0x%04x", param->scan_start.net_idx);
    ESP_LOGI(TAG, "scan_start, rpr_cli_addr 0x%04x", param->scan_start.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: scan_start, uuid", param->scan_start.uuid, 16);
}

static void print_scan_stop_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "scan_stop, element_idx 0x%02x", param->scan_stop.model->element_idx);
    ESP_LOGI(TAG, "scan_stop, model_idx 0x%02x", param->scan_stop.model->model_idx);
    ESP_LOGI(TAG, "scan_stop, net_idx 0x%04x", param->scan_stop.net_idx);
    ESP_LOGI(TAG, "scan_stop, rpr_cli_addr 0x%04x", param->scan_stop.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: scan_stop, uuid", param->scan_stop.uuid, 16);
}

static void print_ext_scan_start_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "ext_scan_start, element_idx 0x%02x", param->ext_scan_start.model->element_idx);
    ESP_LOGI(TAG, "ext_scan_start, model_idx 0x%02x", param->ext_scan_start.model->model_idx);
    if (param->ext_scan_start.ad_type_filter_count && param->ext_scan_start.ad_type_filter) {
        ESP_LOG_BUFFER_HEX("CMD_RP: ext_scan_start, ad_type_filter",
                           param->ext_scan_start.ad_type_filter,
                           param->ext_scan_start.ad_type_filter_count);
    }
    ESP_LOGI(TAG, "ext_scan_start, timeout 0x%02x", param->ext_scan_start.timeout);
    ESP_LOGI(TAG, "ext_scan_start, index 0x%02x", param->ext_scan_start.index);
    ESP_LOGI(TAG, "ext_scan_start, net_idx 0x%04x", param->ext_scan_start.net_idx);
    ESP_LOGI(TAG, "ext_scan_start, rpr_cli_addr 0x%04x", param->ext_scan_start.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: ext_scan_start, uuid", param->ext_scan_start.uuid, 16);
}

static void print_ext_scan_stop_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "ext_scan_stop, element_idx 0x%02x", param->ext_scan_stop.model->element_idx);
    ESP_LOGI(TAG, "ext_scan_stop, model_idx 0x%02x", param->ext_scan_stop.model->model_idx);
    ESP_LOGI(TAG, "ext_scan_stop, timeout 0x%02x", param->ext_scan_stop.timeout);
    ESP_LOGI(TAG, "ext_scan_stop, index 0x%02x", param->ext_scan_stop.index);
    ESP_LOGI(TAG, "ext_scan_stop, net_idx 0x%04x", param->ext_scan_stop.net_idx);
    ESP_LOGI(TAG, "ext_scan_stop, rpr_cli_addr 0x%04x", param->ext_scan_stop.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: ext_scan_stop, uuid", param->ext_scan_stop.uuid, 16);
}

static void print_link_open_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "link_open, element_idx 0x%02x", param->link_open.model->element_idx);
    ESP_LOGI(TAG, "link_open, model_idx 0x%02x", param->link_open.model->model_idx);
    ESP_LOGI(TAG, "link_open, status 0x%02x", param->link_open.status);
    ESP_LOGI(TAG, "link_open, timeout 0x%02x", param->link_open.timeout);
    ESP_LOGI(TAG, "link_open, nppi 0x%02x", param->link_open.nppi);
    ESP_LOGI(TAG, "link_open, net_idx 0x%04x", param->link_open.net_idx);
    ESP_LOGI(TAG, "link_open, rpr_cli_addr 0x%04x", param->link_open.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: link_open, uuid", param->link_open.uuid, 16);
}

static void print_link_close_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "link_close, element_idx 0x%02x", param->link_close.model->element_idx);
    ESP_LOGI(TAG, "link_close, model_idx 0x%02x", param->link_close.model->model_idx);
    ESP_LOGI(TAG, "link_close, nppi 0x%02x", param->link_close.nppi);
    ESP_LOGI(TAG, "link_close, close_by_device %d", param->link_close.close_by_device);
    ESP_LOGI(TAG, "link_close, reason 0x%02x", param->link_close.reason);
    ESP_LOGI(TAG, "link_close, net_idx 0x%04x", param->link_close.net_idx);
    ESP_LOGI(TAG, "link_close, rpr_cli_addr 0x%04x", param->link_close.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: link_close, uuid", param->link_close.uuid, 16);
}

static void print_prov_comp_evt(esp_ble_mesh_rpr_server_cb_param_t *param)
{
    ESP_LOGI(TAG, "prov_comp, element_idx 0x%02x", param->prov_comp.model->element_idx);
    ESP_LOGI(TAG, "prov_comp, model_idx 0x%02x", param->prov_comp.model->model_idx);
    ESP_LOGI(TAG, "prov_comp, nppi 0x%02x", param->prov_comp.nppi);
    ESP_LOGI(TAG, "prov_comp, net_idx 0x%04x", param->prov_comp.net_idx);
    ESP_LOGI(TAG, "prov_comp, rpr_cli_addr 0x%04x", param->prov_comp.rpr_cli_addr);
    ESP_LOG_BUFFER_HEX("CMD_RP: prov_comp, uuid", param->prov_comp.uuid, 16);
}

static void example_remote_prov_server_callback(esp_ble_mesh_rpr_server_cb_event_t event,
                                                esp_ble_mesh_rpr_server_cb_param_t *param)
{
    switch (event) {
    case ESP_BLE_MESH_RPR_SERVER_SCAN_START_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_SCAN_START_EVT");
        print_scan_start_evt(param);
        break;
    case ESP_BLE_MESH_RPR_SERVER_SCAN_STOP_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_SCAN_STOP_EVT");
        print_scan_stop_evt(param);
        break;
    case ESP_BLE_MESH_RPR_SERVER_EXT_SCAN_START_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_EXT_SCAN_START_EVT");
        print_ext_scan_start_evt(param);
        break;
    case ESP_BLE_MESH_RPR_SERVER_EXT_SCAN_STOP_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_EXT_SCAN_STOP_EVT");
        print_ext_scan_stop_evt(param);
        break;
    case ESP_BLE_MESH_RPR_SERVER_LINK_OPEN_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_LINK_OPEN_EVT");
        print_link_open_evt(param);
        board_led_operation(LED_OFF, LED_OFF, LED_ON);
        break;
    case ESP_BLE_MESH_RPR_SERVER_LINK_CLOSE_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_LINK_CLOSE_EVT");
        board_led_operation(LED_OFF, LED_OFF, LED_OFF);
        print_link_close_evt(param);
        break;
    case ESP_BLE_MESH_RPR_SERVER_PROV_COMP_EVT:
        ESP_LOGW(TAG, "ESP_BLE_MESH_RPR_SERVER_PROV_COMP_EVT");
        print_prov_comp_evt(param);
        break;
    default:
        break;
    }
}

static esp_err_t ble_mesh_init(void)
{
    esp_err_t err = ESP_OK;

    esp_ble_mesh_register_prov_callback(example_ble_mesh_provisioning_cb);
    esp_ble_mesh_register_config_server_callback(example_ble_mesh_config_server_cb);
    esp_ble_mesh_register_generic_server_callback(example_ble_mesh_generic_server_cb);
    esp_ble_mesh_register_rpr_server_callback(example_remote_prov_server_callback);

    err = esp_ble_mesh_init(&provision, &composition);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to initialize mesh stack (err %d)", err);
        return err;
    }

    err = esp_ble_mesh_node_prov_enable((esp_ble_mesh_prov_bearer_t)(ESP_BLE_MESH_PROV_ADV | ESP_BLE_MESH_PROV_GATT));
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Failed to enable mesh node (err %d)", err);
        return err;
    }

    ESP_LOGI(TAG, "BLE Mesh Node initialized");

    board_led_operation(LED_ON, LED_OFF, LED_OFF);

    return err;
}

void app_main(void)
{
    esp_err_t err;

    ESP_LOGI(TAG, "Initializing...");

    board_init();

    err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);

    err = bluetooth_init();
    if (err) {
        ESP_LOGE(TAG, "esp32_bluetooth_init failed (err %d)", err);
        return;
    }

    ble_mesh_get_dev_uuid(dev_uuid);
    ESP_LOG_BUFFER_HEX(TAG":uuid", dev_uuid, 16);

    /* Initialize the Bluetooth Mesh Subsystem */
    err = ble_mesh_init();
    if (err) {
        ESP_LOGE(TAG, "Bluetooth mesh init failed (err %d)", err);
    }
}
