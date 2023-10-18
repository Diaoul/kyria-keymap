# :keyboard: Keymap for the Kyria
This is my [QMK][1] keymap for my [splitkb.com][2] Kyria keyboard.

## Design goals
Main focus is English and (vim) programming with some concerns for ease of use
in French while keeping the layout not to exotic to be able to use regular
keyboards (in case of emergency).

## Features
- Colemak DH by default with ability to switch to QWERTY
- Home row mods using ASGC for easier tiling window manager shortcuts
- One-Shot shift on both thumbs
- Layer-tap for Sym and Nav layers on thumbs
- Backspace (right) symetrical to space (left)
- Encoders on ENC3 slots with navigation, media and volume control
- Regular (QWERTY) number and symbol placement
- Accessible compose key and symbols for French accentuated characters

## Firmware size
This build uses a lot of features and takes up a lot of firmware space. Some
QMK [features][3] can be disabled in order to reduce the total amount of space
required. For example:

- [`MAGIC_ENABLE`](https://docs.qmk.fm/#/keycodes_magic)
- [`GRAVE_ESC_ENABLE`](https://docs.qmk.fm/#/feature_grave_esc)
- [`MOUSEKEY_ENABLE`](https://docs.qmk.fm/#/feature_mouse_keys)
- [`SPACE_CADET_ENABLE`](https://docs.qmk.fm/#/feature_space_cadet)

## Flashing
This repository is meant to be used as a submodule of [qmk_firmware][4] under
`keyboards/splitkb/kyria/rev1/diaoul`.
If QMK is configured with this keyboard and keymap, just run:
```
qmk flash
```
Otherwise:
```
make splitkb/kyria/rev1:diaoul
```
Add `:dfu-split-left` or `:dfu-split-right` to the latter to also flash EEPROM
for the [`EE_HANDS`][5] feature.

## Keymapviz
Keymap vizualizations in [keymap.c](keymap.c) are generated by [keymapviz][6]
with:
```
make splitkb/kyria/rev1:diaoul:keymapviz
```

[1]: https://qmk.fm/
[2]: https://splitkb.com/
[3]: https://docs.qmk.fm/#/config_options?id=feature-options
[4]: https://github.com/qmk/qmk_firmware
[5]: https://docs.qmk.fm/#/feature_split_keyboard?id=handedness-by-eeprom
[6]: https://github.com/yskoht/keymapviz
