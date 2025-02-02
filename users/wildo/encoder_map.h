#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_NUM]  =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_NAV]  =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [_MSE]  =   { ENCODER_CCW_CW(RGB_SPD, RGB_SPI) },
    [_FUN]  =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_SYM]  =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_ADD]  =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif