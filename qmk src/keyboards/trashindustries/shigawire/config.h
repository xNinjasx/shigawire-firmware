/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5543
#define PRODUCT_ID      0x5357
#define DEVICE_VER      0x0001
#define MANUFACTURER    "Trash Industries"
#define PRODUCT         "Shigawire"

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { B2, B1, F0, F1, F4, D5, D3, D2, D0, B3 }
#define MATRIX_COL_PINS { B6, B5, B4, D7, D6, D4, D1, B0 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1
