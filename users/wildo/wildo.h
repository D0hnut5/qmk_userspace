/*
Copyright 2025 D0hnut5

This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

enum layer_names {
    _BASE,
    _NUM,
    _NAV,
    _MSE,
    _FUN,
    _SYM,
    _ADD
};

/* Aliases */
#define HOLD XXXXXXX //:(hold)

/*** Home Row Mods ***/
#define A_GUI LGUI_T(KC_A)
#define S_ALT LALT_T(KC_S)
#define D_CTL LCTL_T(KC_D)
#define F_SFT LSFT_T(KC_F)
#define J_SFT RSFT_T(KC_J)
#define K_CTL RCTL_T(KC_K)
#define L_ALT RALT_T(KC_L)
#define HRM_L KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT //:Gui||Alt||Ctl||Sft
#define HRM_R KC_RSFT, KC_RCTL, KC_RALT //:Sft||Ctl||Alt

/* Layer Keys */
#define BS_NUM LT(_NUM, KC_BSPC) // Left bar tap for space, hold for numbers and symbols
#define SPC_NAV LT(_NAV, KC_SPC) // Right bar tap for backspacke, hold for navigation layer on right hand

/* portable keymaps*/
/** 10u **/
/*** base ***/
#define ___BASE_1_L___          KC_Q,       KC_W,       KC_E,       KC_R,       KC_T
#define ___BASE_2_L___          A_GUI,      S_ALT,      D_CTL,      F_SFT,      KC_G
#define ___BASE_3_L___          KC_Z,       KC_X,       KC_C,       KC_V,       KC_B
#define ___BASE_3THM_L___                               KC_LCTL,    KC_LGUI,    BS_NUM
#define ___BASE_2THM_L___                                           KC_LGUI,    BS_NUM                                    
#define ___BASE_3THM_SPLT_L___                          KC_LCTL,    BS_NUM,     BS_NUM

#define ___BASE_1_R___          KC_Y,       KC_U,       KC_I,       KC_O,       KC_P
#define ___BASE_2_R___          KC_H,       J_SFT,      K_CTL,      L_ALT,      KC_ENTER
#define ___BASE_3_R___          KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH
#define ___BASE_3THM_R___       SPC_NAV,    MO(_MSE),   MO(_FUN)
#define ___BASE_2THM_R___       SPC_NAV,    MO(_MSE)
#define ___BASE_3THM_SPLT_R___  SPC_NAV,    SPC_NAV,    MO(_MSE)

/*** number ***/
#define ___NUM_1_L___           KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC
#define ___NUM_2_L___           KC_1,       KC_2,       KC_3,       KC_4,       KC_5
#define ___NUM_3_L___           XXXXXXX,    KC_GRV,     KC_LBRC,    KC_RBRC,    KC_BSLS
#define ___NUM_3THM_L___                                KC_LCTL,    KC_LGUI,    HOLD
#define ___NUM_2THM_L___                                            KC_LGUI,    HOLD
#define ___NUM_3THM_SPLT_L___                           KC_LCTL,    KC_LGUI,    HOLD

#define ___NUM_1_R___           KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN
#define ___NUM_2_R___           KC_6,       KC_7,       KC_8,       KC_9,       KC_0
#define ___NUM_3_R___           KC_MINS,    KC_EQL,     KC_SCLN,    KC_QUOT,    KC_QUES
#define ___NUM_3THM_R___        KC_PSCR,    RGB_MOD,    RGB_RMOD
#define ___NUM_2THM_R___        KC_PSCR,    RGB_MOD
#define ___NUM_3THM_SPLT_R___   XXXXXXX,    KC_PSCR,    RGB_RMOD

/*** navigation ***/
#define ___NAV_1_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___NAV_2_L___           HRM_L,                                          XXXXXXX
#define ___NAV_3_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___NAV_3THM_L___                                RGB_SPD,    RGB_SPI,    KC_DEL
#define ___NAV_2THM_L___                                            RGB_SPI,    KC_DEL
#define ___NAV_3THM_SPLT_L___                           RGB_SPD,    KC_DEL,     RGB_SPI

#define ___NAV_1_R___           XXXXXXX,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP
#define ___NAV_2_R___           XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN
#define ___NAV_3_R___           KC_VOLD,    KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLU
#define ___NAV_3THM_R___        HOLD,       RGB_VAD,    RGB_VAI
#define ___NAV_2THM_R___        HOLD,       RGB_VAD    
#define ___NAV_3THM_SPLT_R___   RGB_VAI,    HOLD,       RGB_VAI

/*** mouse ***/
#define ___MSE_1_L___           XXXXXXX,    KC_ACL2,   KC_ACL1,     KC_ACL0,    XXXXXXX
#define ___MSE_2_L___           XXXXXXX,    XXXXXXX,   KC_BTN2,     KC_BTN1,    XXXXXXX
#define ___MSE_3_L___           XXXXXXX,    XXXXXXX,   XXXXXXX,     XXXXXXX,    XXXXXXX
#define ___MSE_3THM_L___                               XXXXXXX,     XXXXXXX,    XXXXXXX
#define ___MSE_2THM_L___                                            XXXXXXX,    XXXXXXX
#define ___MSE_3THM_SPLT_L___                           XXXXXXX,    XXXXXXX,    XXXXXXX

#define ___MSE_1_R___           XXXXXXX,    XXXXXXX,    KC_MS_U,    XXXXXXX,    XXXXXXX
#define ___MSE_2_R___           XXXXXXX,    KC_MS_L,    KC_MS_D,    KC_MS_R,    XXXXXXX
#define ___MSE_3_R___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___MSE_3THM_R___        XXXXXXX,    HOLD,       XXXXXXX
#define ___MSE_2THM_R___        XXXXXXX,    HOLD
#define ___MSE_3THM_SPLT_R___   XXXXXXX,    XXXXXXX,    XXXXXXX

/*** function ***/
#define ___FUN_1_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___FUN_2_L___           KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5
#define ___FUN_3_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___FUN_3THM_L___                                XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___FUN_2THM_L___                                            XXXXXXX,    XXXXXXX
#define ___FUN_3THM_SPLT_L___                           XXXXXXX,    XXXXXXX,    XXXXXXX

#define ___FUN_1_R___           XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_F11,     KC_F12
#define ___FUN_2_R___           KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10
#define ___FUN_3_R___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___FUN_3THM_R___        XXXXXXX,    XXXXXXX,    HOLD
#define ___FUN_2THM_R___        XXXXXXX,    XXXXXXX
#define ___FUN_3THM_SPLT_R___   XXXXXXX,    XXXXXXX,    XXXXXXX

/*** symbol ***/
#define ___SYM_1_L___           XXXXXXX,    KC_ACL2,    KC_ACL1,    KC_ACL0,    XXXXXXX
#define ___SYM_2_L___           XXXXXXX,    XXXXXXX,    KC_BTN2,    KC_BTN1,    XXXXXXX
#define ___SYM_3_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___SYM_3THM_L___                                XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___SYM_2THM_L___                                            XXXXXXX,    XXXXXXX
#define ___SYM_3THM_SPLT_L___                           XXXXXXX,    XXXXXXX,    XXXXXXX

#define ___SYM_1_R___           XXXXXXX,    XXXXXXX,    KC_MS_U,    XXXXXXX,    XXXXXXX
#define ___SYM_2_R___           XXXXXXX,    KC_MS_L,    KC_MS_D,    KC_MS_R,    XXXXXXX
#define ___SYM_3_R___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___SYM_3THM_R___        XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___SYM_2THM_R___        XXXXXXX,    XXXXXXX       
#define ___SYM_3THM_SPLT_R___   XXXXXXX,    XXXXXXX,    XXXXXXX

/*** additional ***/
#define ___ADD_1_L___           XXXXXXX,    KC_ACL2,    KC_ACL1,    KC_ACL0,    XXXXXXX
#define ___ADD_2_L___           XXXXXXX,    XXXXXXX,    KC_BTN2,    KC_BTN1,    XXXXXXX
#define ___ADD_3_L___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___ADD_3THM_L___                                XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___ADD_2THM_L___                                            XXXXXXX,    XXXXXXX
#define ___ADD_3THM_SPLT_L___                           XXXXXXX,    XXXXXXX,    XXXXXXX

#define ___ADD_1_R___           XXXXXXX,    XXXXXXX,    KC_MS_U,    XXXXXXX,    XXXXXXX
#define ___ADD_2_R___           XXXXXXX,    KC_MS_L,    KC_MS_D,    KC_MS_R,    XXXXXXX
#define ___ADD_3_R___           XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___ADD_3THM_R___        XXXXXXX,    XXXXXXX,    XXXXXXX
#define ___ADD_2THM_R___        XXXXXXX,    XXXXXXX
#define ___ADD_3THM_SPLT_R___   XXXXXXX,    XXXXXXX,    XXXXXXX

/*example katana vault map for reference
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_6bars(
         KC_Q,      KC_W,   KC_E,       KC_R,       KC_T,                   KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,
         KC_A,      S_ALT,  D_CTL,      F_SFT,      KC_G,                   KC_H,       J_SFT,      K_CTL,      L_ALT,      KC_ENTER,
         KC_Z,      KC_X,   KC_C,       KC_V,       KC_B,       KC_MUTE,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,
                            KC_LCTL,    KC_LGUI,    L_SPC,                  R_SPC,      MO(3),      MO(4)
    ),

    [1] = LAYOUT_split_6bars(
         KC_EXLM,   KC_AT,  KC_HASH,    KC_DLR,     KC_PERC,                KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,
         KC_1,      KC_2,   KC_3,       KC_4,       KC_5,                   KC_6,       KC_7,       KC_8,       KC_9,       KC_0,
         KC_TRNS,   KC_GRV, KC_LBRC,    KC_RBRC,    KC_BSLS,    RGB_TOG,    KC_MINS,    KC_EQL,     KC_SCLN,    KC_QUOT,    KC_QUES,
                            RGB_HUD,    RGB_HUI,    KC_TRNS,                KC_PSCR,    RGB_MOD,    RGB_RMOD
    ),

    [2] = LAYOUT_split_6bars(
         _______,  _______,  _______,   _______,    _______,                _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,
         _______,  KC_LALT,  KC_LCTL,   KC_LSFT,    _______,                _______,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,
         _______,  _______,  _______,   _______,    _______,   RGB_TOG,     _______,    _______,    _______,    _______,    _______,
                             RGB_SPD,   RGB_SPI,    KC_DEL,                 KC_TRNS,    RGB_VAD,    RGB_VAI
    ),

    [3] = LAYOUT_split_6bars(
         _______,  KC_ACL2,  KC_ACL1,   KC_ACL0,    _______,                _______,      KC_NO,    KC_MS_U,      KC_NO,      KC_NO,
         _______,  _______,  KC_BTN2,   KC_BTN1,    _______,                _______,    KC_MS_L,    KC_MS_D,    KC_MS_R,      KC_NO,
         _______,  _______,  _______,   _______,    _______,   RGB_TOG,     _______,    _______,    _______,    _______,    _______,
                             _______,   _______,    _______,                _______,    KC_TRNS,    _______
    ),

    [4] = LAYOUT_split_6bars(
         _______,  _______,  _______,   _______,    _______,                _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,
         _______,  KC_LALT,  KC_LCTL,   KC_LSFT,    _______,                _______,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_PGDN,
          QK_RBT,  _______,  _______,   _______,    _______,   KC_TRNS,     _______,    _______,    _______,    _______,    _______,
                             _______,   _______,    _______,                _______,    _______,    KC_TRNS
    )
};
*/

/*
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [2] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [3] =   { ENCODER_CCW_CW(RGB_SPD, RGB_SPI) },
    [4] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif
*/

/*#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case F_SFT:
            // Immediately select the hold action when another key is tapped.
            return true;
        case J_SFT:
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}
#endif*/

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case F_SFT:
            return 140;
        case J_SFT:
            return 140;
        default:
            return TAPPING_TERM;
    }
}
#endif

#ifdef COMBO_ENABLE
enum combos {
     QW_ESC,
     DF_TAB,
     JK_BACK,
     FJ_CAPS,
     QPZ_BOOT
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM df_combo[] = {D_CTL, F_SFT, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {J_SFT, K_CTL, COMBO_END};
const uint16_t PROGMEM fj_combo[] = {F_SFT, J_SFT , COMBO_END};
const uint16_t PROGMEM qpz_combo[] = {KC_Q, KC_P, KC_Z, KC_SLSH, COMBO_END};

combo_t key_combos[] = {
    [QW_ESC] = COMBO(qw_combo, KC_ESC),
    [DF_TAB] = COMBO(df_combo, KC_TAB),
    [JK_BACK] = COMBO(jk_combo, RCTL(KC_BSPC)),
    [FJ_CAPS] = COMBO(fj_combo, KC_CAPS),
    [QPZ_BOOT] = COMBO(qpz_combo, QK_BOOT),
};
#endif

/** layout macros **/
#define LAYOUT_wildo(...)              LAYOUT(__VA_ARGS__)
#define LAYOUT_wildo_vault_katana(...) LAYOUT_split_6bars(__VA_ARGS__)
/* portable keymaps end */

#endif // USERSPACE