# Configuration
# Caps Word (https://docs.qmk.fm/#/feature_caps_word)
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = no

# Firware size optimization (not needed at the moment)
# see https://docs.qmk.fm/#/squeezing_avr?id=squeezing-the-most-out-of-avr
# CONSOLE_ENABLE = no
# COMMAND_ENABLE = no
# MOUSEKEY_ENABLE = no
# EXTRAKEY_ENABLE = no
# SPACE_CADET_ENABLE = no
# GRAVE_ESC_ENABLE = no
# MAGIC_ENABLE = no

# Load configuration-specific code
ifeq ($(strip $(COMBO_ENABLE)), yes)
	SRC += combos.c
endif

# Makefile location
DIR := $(dir $(realpath $(lastword $(MAKEFILE_LIST))))

# Keymapviz
.PHONY: keymapviz
keymapviz:
	@keymapviz -k kyria -c $(DIR)keymapviz.cfg -r $(DIR)keymap.c > /dev/null
