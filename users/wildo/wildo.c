#include "wildo.h"
#include "features/achordion.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) { return false; }
    // Your macros ...
  
    return true;
  };

bool achordion_eager_mod(uint8_t mod) {
    switch (mod) {
      case MOD_LSFT:
      case MOD_LCTL:
      case MOD_LALT:
        return true;
  
      default:
        return false;
    }
  };
   
uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode) {
      // layer keys
      case BS_NUM:
      case SPC_NAV:
      case _MSE:
      case _FUN:
      case _SYM:
      case _ADD:
        return 0;  // Bypass Achordion for these keys.
    }
    return 1000;
};

void housekeeping_task_user(void) {
    achordion_task();
};

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case F_SFT:
            return 140;
        case J_SFT:
            return 140;
        case A_GUI:
            return 200;
        default:
            return TAPPING_TERM;
    }
};
#endif