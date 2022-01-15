#pragma once

#include QMK_KEYBOARD_H

enum layers {
    _COLEMAK_DH = 0,
    _QWERTY,
    _NAV,
    _SYM,
    _FUN,
    _ADJ,
};
// Layers
#define COLEMAK DF(_COLEMAK_DH)
#define QWERTY DF(_QWERTY)

// Layer keys
#define NAV_TAB LT(_NAV, KC_TAB)
#define NAV_SPC LT(_NAV, KC_SPC)
#define SYM_ENT LT(_SYM, KC_ENT)
#define SYM_BSPC LT(_SYM, KC_BSPC)
#define ADJ MO(_ADJ)
#define FUN MO(_FUN)

// Compose key
#define COMPOSE KC_RALT

// Home row mods (colemak)
#define HC_A LALT_T(KC_A)
#define HC_R LSFT_T(KC_R)
#define HC_S LGUI_T(KC_S)
#define HC_T LCTL_T(KC_T)
#define HC_O LALT_T(KC_O)
#define HC_I RSFT_T(KC_I)
#define HC_E RGUI_T(KC_E)
#define HC_N RCTL_T(KC_N)

// Home row mods (qwerty)
#define HQ_A LALT_T(KC_A)
#define HQ_S LSFT_T(KC_S)
#define HQ_D LGUI_T(KC_D)
#define HQ_F LCTL_T(KC_F)
#define HQ_J LALT_T(KC_J)
#define HQ_K RSFT_T(KC_K)
#define HQ_L RGUI_T(KC_L)
#define HQ_SCLN RCTL_T(KC_SCLN)

// One shot shifts
#define OS_LSFT OSM(MOD_LSFT)
#define OS_RSFT OSM(MOD_RSFT)


enum custom_keycodes {
    // Smart keys
    CAPS_WRD = SAFE_RANGE,
    // French
    E_GRAVE,
    A_GRAVE,
    GUILL_R,
    GUILL_L,
};
