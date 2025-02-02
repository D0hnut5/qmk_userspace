// Copyright 2024 jlw
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "wildo.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_wildo(
          ___BASE_1_L___,                              ___BASE_1_R___,
          ___BASE_2_L___,                              ___BASE_2_R___,
          ___BASE_3_L___,                              ___BASE_3_R___,
               ___BASE_2THM_L___,            ___BASE_2THM_R___  
    ),
    [_NUM] = LAYOUT_wildo(
          ___NUM_1_L___,                               ___NUM_1_R___,
          ___NUM_2_L___,                               ___NUM_2_R___,
          ___NUM_3_L___,                               ___NUM_3_R___,
               ___NUM_2THM_L___,             ___NUM_2THM_R___  
    ),
    [_NAV] = LAYOUT_wildo(
          ___NAV_1_L___,                               ___NAV_1_R___,
          ___NAV_2_L___,                               ___NAV_2_R___,
          ___NAV_3_L___,                               ___NAV_3_R___,
               ___NAV_2THM_L___,             ___NAV_2THM_R___  
    ),
    [_MSE] = LAYOUT_wildo(
          ___MSE_1_L___,                               ___MSE_1_R___,
          ___MSE_2_L___,                               ___MSE_2_R___,
          ___MSE_3_L___,                               ___MSE_3_R___,
               ___MSE_2THM_L___,             ___MSE_2THM_R___  
    ),
    [_FUN] = LAYOUT_wildo(
          ___FUN_1_L___,                               ___FUN_1_R___,
          ___FUN_2_L___,                               ___FUN_2_R___,
          ___FUN_3_L___,                               ___FUN_3_R___,
               ___FUN_2THM_L___,             ___FUN_2THM_R___  
    ),
    [_SYM] = LAYOUT_wildo(
          ___SYM_1_L___,                               ___SYM_1_R___,
          ___SYM_2_L___,                               ___SYM_2_R___,
          ___SYM_3_L___,                               ___SYM_3_R___,
               ___SYM_2THM_L___,             ___SYM_2THM_R___  
    ),
    [_ADD] = LAYOUT_wildo(
          ___ADD_1_L___,                               ___ADD_1_R___,
          ___ADD_2_L___,                               ___ADD_2_R___,
          ___ADD_3_L___,                               ___ADD_3_R___,
               ___ADD_2THM_L___,             ___ADD_2THM_R___  
    )
};