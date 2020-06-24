/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/* This is the default layout provided by the KBP V60 Type R
* as depicted in their manual and on the stock keycaps.
*/
#include "v60_type_r.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap 0: Default Layer (Qwerty)
   * ,-----------------------------------------------------------.
   * | `  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   Bs  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |FnLk |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Fn |Alt |      Space             |Alt|Fn |Gui  |Ctrl  |
   * `-----------------------------------------------------------'
   */
  [0] = KEYMAP(
	       KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_NO, KC_BSPC, \
	       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
	       MO(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  \
	       KC_LSFT, KC_NO,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_NO,  \
	       KC_LCTL, KC_LGUI,  KC_LALT,          KC_SPC,                                      KC_RALT, MO(1),   KC_LGUI,  KC_RCTL),
  
    /* Keymap 1: Default Layer (Qwerty)
   * ,-----------------------------------------------------------.
   * | Esc | F1| F2| F3| F4| F5| F6| F7| F8| F9| F10| F11| F12| Del  |
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y| Hm | Up | End|  P|  [|  ]|   \|
   * |-----------------------------------------------------------|
   * |FnLk |  A|  S|  D|  F|  G|PgUp| Lft| Dwn| Rgt|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |LShift  |  Z|  X|  C|  V|  B|PgDn|  M|  ,|  .|  /| RShift   |
   * |-----------------------------------------------------------|
   * |Ctrl|Fn |Alt |      Space             |Alt|Fn |Gui  |Ctrl  |
   * `-----------------------------------------------------------'
   */

  [1] = KEYMAP(
	       KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_NO,   KC_DEL, \
      /*   esc,       1,        2,        3,        4,        5,        6,         7,       8,       9,       0,       -,       +,          ,   Bspc  */
	       KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_HOME, KC_UP, KC_END, KC_PSCR, KC_SLCK, KC_PAUS,         KC_TRNS, \
      /*   tab,       q,        w,        e,        r,        t,        y,          u,      i,       o,       p,       [,       ],               \ */
	       KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,   KC_LEFT, KC_DOWN, KC_RIGHT,KC_INS,  KC_DEL,          KC_TRNS,          \
      /*   fnlck,     a,        s,        d,        f,        g,        h,         j,       k,       l,       ;,      ',                enter  */
	       KC_TRNS,   KC_NO,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_PGDN,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_NO,  \
      /*   shft,                 z,        x,        c,        v,        b,         n,      m,       ,,       .,       /,              shift  */
	       KC_TRNS,   KC_TRNS,  KC_TRNS,            KC_TRNS,                                                           KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS),
      /*   lctrl,     gui,     lalt,               space,                                                              ralt,    fnc,   gui,       rctrl */

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
