#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LALT, MO(1), KC_SPC, KC_ENT, MO(2), KC_RCTL),
    [1] = LAYOUT_split_3x6_3(KC_GRV, KC_LGUI, KC_LALT, RCS(KC_L), KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), KC_UP, LCTL(KC_RGHT), KC_PGUP, KC_BSPC, KC_UNDS, KC_LSFT, RCS(KC_LBRC), RCS(KC_ENT), RCS(KC_RBRC), KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_GRV, KC_LSFT, LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO, KC_NO, KC_HOME, KC_NO, KC_END, LCTL(KC_PGUP), LCTL(KC_PGDN), KC_LALT, KC_TRNS, KC_SPC, KC_EQL, MO(3), KC_RCTL),
    [2] = LAYOUT_split_3x6_3(KC_ESC, KC_1, KC_2, KC_3, KC_DLR, KC_PERC, KC_CIRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_DEL, KC_CAPS, KC_4, KC_5, KC_6, KC_AMPR, KC_ASTR, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_BSLS, KC_NO, KC_LSFT, KC_7, KC_8, KC_9, KC_PLUS, KC_NO, KC_NO, KC_F1, KC_F2, KC_NO, KC_PIPE, KC_RSFT, KC_LCTL, MO(3), KC_LGUI, KC_ENT, KC_TRNS, KC_RALT),
    [3] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_BRID, KC_NO, KC_BRIU, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_NO, KC_F12, KC_NO, KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO, KC_NO, KC_F4, KC_F5, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO, KC_MRWD, KC_MPLY, KC_MFFD, KC_NO, KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


