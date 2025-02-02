// Copyright 2023 jlw
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "wildo.h"
#include "encoder_map.h"
#include "encoder_press.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_wildo_katana(
          ___BASE_1_L___,                              ___BASE_1_R___,
          ___BASE_2_L___,                              ___BASE_2_R___,
          ___BASE_3_L___,           ENC_BASE,          ___BASE_3_R___,
               ___BASE_3THM_L___,            ___BASE_3THM_R___  
    ),
    [_NUM] = LAYOUT_wildo_vault_katana(
          ___NUM_1_L___,                               ___NUM_1_R___,
          ___NUM_2_L___,                               ___NUM_2_R___,
          ___NUM_3_L___,            ENC_NUM,           ___NUM_3_R___,
               ___NUM_3THM_L___,             ___NUM_3THM_R___  
    ),
    [_NAV] = LAYOUT_wildo_vault_katana(
          ___NAV_1_L___,                               ___NAV_1_R___,
          ___NAV_2_L___,                               ___NAV_2_R___,
          ___NAV_3_L___,            ENC_NAV,           ___NAV_3_R___,
               ___NAV_3THM_L___,             ___NAV_3THM_R___  
    ),
    [_MSE] = LAYOUT_wildo_vault_katana(
          ___MSE_1_L___,                               ___MSE_1_R___,
          ___MSE_2_L___,                               ___MSE_2_R___,
          ___MSE_3_L___,            ENC_MSE,           ___MSE_3_R___,
               ___MSE_3THM_L___,             ___MSE_3THM_R___  
    ),
    [_FUN] = LAYOUT_wildo_vault_katana(
          ___FUN_1_L___,                               ___FUN_1_R___,
          ___FUN_2_L___,                               ___FUN_2_R___,
          ___FUN_3_L___,            ENC_FUN,           ___FUN_3_R___,
               ___FUN_3THM_L___,             ___FUN_3THM_R___  
    ),
    [_SYM] = LAYOUT_wildo_vault_katana(
          ___SYM_1_L___,                               ___SYM_1_R___,
          ___SYM_2_L___,                               ___SYM_2_R___,
          ___SYM_3_L___,            ENC_SYM,           ___SYM_3_R___,
               ___SYM_3THM_L___,             ___SYM_3THM_R___  
    ),
    [_ADD] = LAYOUT_wildo_vault_katana(
          ___ADD_1_L___,                               ___ADD_1_R___,
          ___ADD_2_L___,                               ___ADD_2_R___,
          ___ADD_3_L___,            ENC_ADD,           ___ADD_3_R___,
               ___ADD_3THM_L___,             ___ADD_3THM_R___  
    )
};


