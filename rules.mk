# Configuration
OLED_ENABLE = yes
OLED_DRIVER = SSD1306
ENCODER_ENABLE = yes
RGBLIGHT_ENABLE = yes
SLEEP_LED_ENABLE = yes
COMBO_ENABLE = no

# Firware size optimization
MAGIC_ENABLE = no
GRAVE_ESC_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no

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
