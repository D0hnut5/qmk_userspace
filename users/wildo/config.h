/*
This is the c configuration file for the keymap

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

#pragma once

#define TAPPING_TERM 180
#define TAPPING_TERM_PER_KEY

#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 2000  // 2 seconds
#undef BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// start QMK squeezing
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT
// end QMK squeezing

// Mouse Keys
#define MK_KINETIC_SPEED // use MK_3_SPEED if builds are too large

// Caps Word
// #define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD