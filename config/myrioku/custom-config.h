//  Copyright (c) 2024 The ZMK Contributors
//  SPDX-License-Identifier: MIT

// Replacing the eyelash_corne.conf file with the eyelash_corne.h file to follow the structure of Miryoku's config files.

#define MIRYOKU_KLUDGE_MOUSEKEYSPR 1

#define CONFIG_ZMK_SLEEP 1
#define CONFIG_ZMK_IDLE_SLEEP_TIMEOUT 1800000

#define CONFIG_WS2812_STRIP 1
#define CONFIG_ZMK_RGB_UNDERGLOW 1
#define CONFIG_ZMK_RGB_UNDERGLOW_ON_START 0

#define CONFIG_ZMK_RGB_UNDERGLOW_AUTO_OFF_IDLE 1
#define CONFIG_ZMK_RGB_UNDERGLOW_HUE_START 160
#define CONFIG_ZMK_RGB_UNDERGLOW_EFF_START 3

// https://zmk.dev/docs/config/bluetooth
// Enables a combination of settings that are planned to be default in future versions of ZMK to improve connection stability. Currently this only disables 2M PHY support.
#define CONFIG_ZMK_BLE_EXPERIMENTAL_CONN 1
#define CONFIG_ZMK_BLE_PASSKEY_ENTRY 1

// EC11 enable
#define CONFIG_EC11 1
#define CONFIG_EC11_TRIGGER_GLOBAL_THREAD 1

// Mouse enable
#define CONFIG_ZMK_MOUSE 1

#define CONFIG_ZMK_BACKLIGHT 1
#define CONFIG_ZMK_BACKLIGHT_BRT_START 100

// Uncomment the following line to increase the keyboard's wireless range
//#define CONFIG_BT_CTLR_TX_PWR_PLUS_8 1

// Enable eager debouncing
#define CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS 1
#define CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS 7