#undef NO_ACTION_ONESHOT
#define ENCODER_DIRECTION_FLIP
#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4

#ifdef BUBBLE_CASE
    #undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 255
    #undef ENCODER_MAP_ENABLE
#endif