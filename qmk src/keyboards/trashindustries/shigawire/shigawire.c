/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "shigawire.h"

void led_set_kb(uint8_t usb_led) {
  led_set_user(usb_led);
}