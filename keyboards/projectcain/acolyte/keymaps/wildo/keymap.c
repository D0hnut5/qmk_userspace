/* Copyright 2021 projectcain
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "wildo.h"
#include "encoder_map.h"
#include "encoder_press.h"
#include "combos_30alpha.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_wildo(
          ___BASE_1_L___,                              ___BASE_1_R___,
          ___BASE_2_L___,                              ___BASE_2_R___,
          ___BASE_3_L___,                              ___BASE_3_R___,
               ___BASE_3THM_L___,            ___BASE_3THM_R___  
    ),
    [_NUM] = LAYOUT_wildo(
          ___NUM_1_L___,                               ___NUM_1_R___,
          ___NUM_2_L___,                               ___NUM_2_R___,
          ___NUM_3_L___,                               ___NUM_3_R___,
               ___NUM_3THM_L___,             ___NUM_3THM_R___  
     ),
    [_NAV] = LAYOUT_wildo(
          ___NAV_1_L___,                               ___NAV_1_R___,
          ___NAV_2_L___,                               ___NAV_2_R___,
          ___NAV_3_L___,                               ___NAV_3_R___,
               ___NAV_3THM_L___,             ___NAV_3THM_R___  
    ),
    [_MSE] = LAYOUT_wildo(
          ___MSE_1_L___,                               ___MSE_1_R___,
          ___MSE_2_L___,                               ___MSE_2_R___,
          ___MSE_3_L___,                               ___MSE_3_R___,
               ___MSE_3THM_L___,             ___MSE_3THM_R___  
    ),
    [_FUN] = LAYOUT_wildo(
          ___FUN_1_L___,                               ___FUN_1_R___,
          ___FUN_2_L___,                               ___FUN_2_R___,
          ___FUN_3_L___,                               ___FUN_3_R___,
               ___FUN_3THM_L___,             ___FUN_3THM_R___  
    ),
    [_SYM] = LAYOUT_wildo(
          ___SYM_1_L___,                               ___SYM_1_R___,
          ___SYM_2_L___,                               ___SYM_2_R___,
          ___SYM_3_L___,                               ___SYM_3_R___,
               ___SYM_3THM_L___,             ___SYM_3THM_R___  
    ),
    [_ADD] = LAYOUT_wildo(
          ___ADD_1_L___,                               ___ADD_1_R___,
          ___ADD_2_L___,                               ___ADD_2_R___,
          ___ADD_3_L___,                               ___ADD_3_R___,
               ___ADD_3THM_L___,             ___ADD_3THM_R___  
    )
};