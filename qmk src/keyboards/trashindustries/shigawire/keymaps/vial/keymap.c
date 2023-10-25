/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TG(1), KC_PSLS, KC_PAST, KC_PMNS, KC_PPLS, KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, KC_P7, KC_P8, KC_P9, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_P4, KC_P5, KC_P6, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_P1, KC_P2, KC_P3, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(2), KC_LEFT, KC_RIGHT, KC_P0, KC_PDOT, KC_PENT),
  [1] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TG(1), KC_TILD, KC_GRV, KC_MINS, KC_EQL, KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL, KC_BSPC, KC_LBRC, KC_RBRC, KC_BSLS, KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_QUOT, KC_F5, KC_PIPE, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LPRN, KC_UP, KC_RPRN, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, MO(2), KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT),
  [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_CALCULATOR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU, KC_HOME, KC_PGUP, KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_F5, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_END, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP, KC_DOWN, KC_TRNS, KC_TRNS, KC_TRNS)
};


bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        // writePin sets the pin high for 1 and low for 0.
        writePin(F5, led_state.caps_lock);
    }
    return res;
}

void process_indicator_update(layer_state_t state, uint8_t usb_led) {
  if (state & (1<<1)) {
  writePinHigh(C6);
} else {
  writePinLow(C6);
}

  if (state & (1<<2)) {
  writePinHigh(C7);
} else {
  writePinLow(C7);
}

  if (state & (1<<3)) {
  writePinHigh(F6);
} else {
  writePinLow(F6);
}

};

void keyboard_post_init_user(void) {
  
  setPinOutput(C6);
  
  writePinLow(C6);

  setPinOutput(C7);
  
  writePinLow(C7);

  setPinOutput(F6);
  
  writePinLow(F6);

  process_indicator_update(layer_state, host_keyboard_leds());
};

void led_set_user(uint8_t usb_led) {
  process_indicator_update(layer_state, host_keyboard_leds());
};

layer_state_t layer_state_set_user(layer_state_t state) {
  process_indicator_update(state, host_keyboard_leds());
  return state;
};