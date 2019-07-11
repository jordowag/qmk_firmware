/*
Copyright 2017 Luiz Ribeiro <luizribeiro@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BL] = LAYOUT(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_HOME,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_PGUP,  \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGDN,    \
      KC_LSFT,          KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_END,      \
      MO(2), KC_LGUI, KC_LALT,                          KC_SPC,                 KC_RALT, MO(_FL),           KC_LEFT, KC_DOWN,  KC_RIGHT),

  [_FL] = LAYOUT(
      KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_DEL,   KC_PSCR,    \
      KC_TRNS, KC_7,    KC_8,    KC_9,    RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,RGB_VAI,RGB_VAD, KC_PSCR, KC_SLCK,  KC_PAUS, RESET,    KC_SLCK, \
      KC_TRNS, KC_4,    KC_5,    KC_6,    KC_TRNS,KC_TRNS,KC_TRNS,RGB_SPI,RGB_SPD,  KC_F14,  KC_F15,  KC_INS,   KC_ENT,            KC_INS,   \
      KC_LSFT,          KC_1,    KC_2,    KC_3,   KC_NO,  KC_NO,  KC_NO,  KC_MUTE,KC_VOLD, KC_VOLU, KC_NO,    KC_BTN1, KC_MS_U,  KC_BTN2,       \
      KC_LCTL, KC_LGUI, KC_LALT,                          KC_TRNS,                KC_RALT, KC_TRNS,          KC_MS_L, KC_MS_D,KC_MS_R),
  LAYOUT(
      KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_HOME,    \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_PGUP,  \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,   LALT(KC_F4),   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            KC_PGDN,    \
      KC_LSFT,          RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T,  KC_SLSH,  KC_BTN1, KC_MS_U,  KC_BTN2,     \
      KC_TRNS, KC_LGUI, KC_LALT,                          KC_SPC,                 KC_RALT, MO(_FL),            KC_MS_L, KC_MS_D,KC_MS_R),
};
