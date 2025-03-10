#ifdef COMBO_ENABLE
#include "combo_defs.h"

combo_t key_combos[] = {
    COMBO(qw_combo, KC_ESC),
    COMBO(df_combo, KC_TAB),
    COMBO(jk_combo, RCTL(KC_BSPC)),
    COMBO(fj_combo, KC_CAPS), // regular caps lock
    COMBO(wfj_combo, CW_TOGG), // caps word
    COMBO(qpz_combo, QK_BOOT),
    COMBO(zxcv_combo, KC_DEL),
};
#endif
