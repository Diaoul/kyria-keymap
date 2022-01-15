#include QMK_KEYBOARD_H
#include "keymap.h"

enum combos {
  OS_SFT_CAPS_WRD,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM os_sft_combo[] = {OS_LSFT, OS_RSFT, COMBO_END};

combo_t key_combos[] = {
  [OS_SFT_CAPS_WRD] = COMBO(os_sft_combo, CAPS_WRD),
};
