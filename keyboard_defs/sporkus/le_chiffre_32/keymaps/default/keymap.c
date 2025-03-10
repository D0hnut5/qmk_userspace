// Copyright 2023 sporkus
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "../../rgb.c"

// Just something for quick testing, not meant to be used
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,      RGB_TOG,     KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,
         KC_A,   KC_S,   KC_D,   KC_F,   KC_G,                   KC_H,   KC_J,   KC_K,    KC_L,   KC_QUOT,
         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,                   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,
                         LT(1, KC_ESC),  KC_ENT,                 KC_SPC, LT(2, KC_BSPC)
    ),

    [1] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  KC_7,     KC_8,     KC_9,     KC_0,
         _______,  _______,  _______,  _______,  _______,            _______,  KC_4,     KC_5,     KC_6,     _______,
         _______,  _______,  _______,  _______,  _______,            _______,  KC_1,     KC_2,     KC_3,     _______,
                                       _______,  _______,            _______,  _______
    ),

    [2] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    ),
    
    [3] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    ),
    
    [4] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    ),
    
    [5] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    ),

    [6] = LAYOUT(
         _______,  _______,  _______,  _______,  _______,  QK_BOOT,  _______,  _______,   _______,   _______,    _______,
         _______,  _______,  _______,  _______,  _______,            KC_LEFT,  KC_DOWN,   KC_UP,     KC_LEFT,    _______,
         _______,  _______,  _______,  _______,  _______,            _______,  _______,   _______,   _______,    _______,
                                       _______,  _______,            _______,  _______
    ),
};
