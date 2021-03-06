/*
Copyright 2020 Jay Greco

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


// keymap layers
enum layer_names {
    _BASE,
    _VIA1,
    _VIA2,
    _VIA3
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
    KC_F1, KC_F2, KC_NO,
    KC_F4, KC_F5, KC_NO
),

[_VIA1] = LAYOUT(
    _______, _______, KC_NO,
    _______, _______, KC_NO
),

[_VIA2] = LAYOUT(
    _______, _______, KC_NO,
    _______, _______, KC_NO
),

[_VIA3] = LAYOUT(
    _______, _______, KC_NO,
    _______, _______, KC_NO
)
};

// include and run the animation
#ifdef OLED_DRIVER_ENABLE
#include "oled_ed.h"

void oled_task_user(void) {
    render_anim();
}
#endif

// turn the led off
void matrix_init_user(void) {
  set_scramble_LED(LED_OFF);
}

// rotary encoder values
void encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
}
