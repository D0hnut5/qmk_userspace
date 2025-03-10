/* Copyright 2022  CyanDuck
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
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
#include "encoder_press.h"
#include "encoder_map_waterfowl.h"
#include "combos_30alpha.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_wildo(
		___BASE_1_L___,                              ___BASE_1_R___,
		___BASE_2_L___,                              ___BASE_2_R___,
		___BASE_3_L___,                              ___BASE_3_R___,
		ENC_BASE, BS_NUM, BS_NUM, KC_LCTL, ENC_BASE, ENC_BASE, MO(_MSE), SPC_NAV, SPC_NAV, ENC_BASE
	),
	[_NUM] = LAYOUT_wildo(
		___NUM_1_L___,                               ___NUM_1_R___,
		___NUM_2_L___,                               ___NUM_2_R___,
		___NUM_3_L___,                               ___NUM_3_R___,
		ENC_NUM, HOLD, HOLD, KC_LCTL, ENC_NUM, ENC_NUM, RGB_RMOD, KC_PSCR, XXXXXXX, ENC_NUM
	),
	[_NAV] = LAYOUT_wildo(		
		___NAV_1_L___,                               ___NAV_1_R___,
		___NAV_2_L___,                               ___NAV_2_R___,
		___NAV_3_L___,                               ___NAV_3_R___,
		ENC_NAV, KC_DEL, KC_DEL, RGB_SPD, ENC_NAV, ENC_NAV, RGB_VAI, HOLD, HOLD, ENC_NAV
	),
	[_MSE] = LAYOUT_wildo(
		___MSE_1_L___,                               ___MSE_1_R___,
		___MSE_2_L___,                               ___MSE_2_R___,
		___MSE_3_L___,                               ___MSE_3_R___,
		ENC_MSE, XXXXXXX, XXXXXXX, XXXXXXX, ENC_MSE, ENC_MSE, XXXXXXX, XXXXXXX, XXXXXXX, ENC_MSE  
	),
	[_FUN] = LAYOUT_wildo(
		___FUN_1_L___,                               ___FUN_1_R___,
		___FUN_2_L___,                               ___FUN_2_R___,
		___FUN_3_L___,                               ___FUN_3_R___,
		ENC_FUN, XXXXXXX, XXXXXXX, XXXXXXX, ENC_FUN, ENC_FUN, XXXXXXX, XXXXXXX, XXXXXXX, ENC_FUN
	),
	[_SYM] = LAYOUT_wildo(
		___SYM_1_L___,                               ___SYM_1_R___,
		___SYM_2_L___,                               ___SYM_2_R___,
		___SYM_3_L___,                               ___SYM_3_R___,
		ENC_SYM, XXXXXXX, XXXXXXX, XXXXXXX, ENC_SYM, ENC_SYM, XXXXXXX, XXXXXXX, XXXXXXX, ENC_SYM
	),
	[_ADD] = LAYOUT_wildo(
		___ADD_1_L___,                               ___ADD_1_R___,
		___ADD_2_L___,                               ___ADD_2_R___,
		___ADD_3_L___,                               ___ADD_3_R___,
		ENC_ADD, XXXXXXX, XXXXXXX, XXXXXXX, ENC_ADD, ENC_ADD, XXXXXXX, XXXXXXX, XXXXXXX, ENC_ADD  
	)
};

/*
 *
 * ,----------------------------------.                      ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |                      |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|                      |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |                      |   H  |   J  |   K  |   L  |   ;  |
 * |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |  |CAPS |    |NUMLK|  |   N  |   M  |   ,  |   .  |   /  |
 * `----------------------------------'  `-----'    `-----'  `----------------------------------'
 *          ,-----.   ,--------------------.            ,--------------------.   ,-----. 
 *          |  1  |   | DEL | SPACE | TAB  |            |  ESC  | BS | ENTER |   |  4  |
 *          `-----'   `--------------------'            `--------------------'   `-----'
*/

#ifdef OLED_ENABLE

bool oled_task_user(void) {
   if (is_keyboard_master()) {
       // Host Keyboard Layer Status
       oled_write_P(PSTR("Waterfowl\nGET DUCKED\n\nLAYER:\n"), false);
       oled_write_P(PSTR("\n"), false);
	   
       switch (get_highest_layer(layer_state)) {
           case 0:
               oled_write_P(PSTR("NUMBERS\n\n\n\n"), false);
               break;
           case 3:
               oled_write_P(PSTR("NAVIGATION\n\n\n\n"), false);
               break;
           case 2:
               oled_write_P(PSTR("MOUSE\n\n\n\n"), false);
               break;
           case 1:
               oled_write_P(PSTR("FUNCTION\n\n\n\n"), false);
               break;
           default:
               oled_write_ln_P(PSTR("Undefined"), false);
       }
	   return false;
	} else {
		return true;
	}
};
#endif