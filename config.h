#pragma once

#define EE_HANDS
#define ENCODER_RESOLUTION 2


// Caps Word (see https://docs.qmk.fm/#/feature_caps_word)
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// RGB Lighting (see https://docs.qmk.fm/#/feature_rgblight)
#ifdef RGBLIGHT_ENABLE
  // Configuration
  #define RGBLIGHT_LIMIT_VAL 200
  #define RGBLIGHT_SLEEP
  #define RGBLIGHT_SPLIT
  #define RGBLIGHT_DEFAULT_HUE 112

  // Effects
  #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85
  #define RGBLIGHT_EFFECT_BREATHE_MAX RGBLIGHT_LIMIT_VAL

  // Layers
  // #define RGBLIGHT_LAYERS
#endif

// Tap Hold (see https://docs.qmk.fm/#/tap_hold)
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
