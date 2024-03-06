/*
Copyright 2023 Furlukin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <keymap_french.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_4x6_2(
        KC_ESC,     KC_1,   KC_2,   KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       FR_RPRN,
        KC_TAB,		FR_A,   FR_Z,	FR_E,    	FR_R,    	FR_T,       FR_Y,       FR_U,		FR_I,		FR_O,   	FR_P,		KC_PSCR,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,    	FR_G,       FR_H,       FR_J,       FR_K,		FR_L,   	FR_M,		KC_DEL,
        KC_LCTL, 	FR_W,	FR_X, 	FR_C,    	FR_V,    	FR_B,       FR_N,  		FR_COMM,	FR_SCLN,	FR_COLN,	FR_EXLM,	KC_LALT,
									    		MO(1),      KC_ESC, 	KC_SPC,  	MO(2)
	),
    [1] = LAYOUT_split_4x6_2(
        KC_1,       KC_2,   KC_3,   KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    FR_EQL,
        KC_TAB,		FR_A,   FR_Z,	FR_E,    	FR_R,    	FR_T,       FR_Y,       FR_U,		FR_I,		FR_O,   	FR_P,		KC_PSCR,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,    	FR_G,       FR_H,       FR_J,       FR_K,		FR_L,   	FR_M,		KC_DEL,
        KC_LCTL, 	FR_W,	FR_X, 	FR_C,    	FR_V,    	FR_B,       FR_N,  		FR_COMM,	FR_SCLN,	FR_COLN,	FR_EXLM,	KC_LALT,
									    		MO(1),      KC_ESC, 	KC_SPC,  	MO(2)
	),
    [2] = LAYOUT_split_4x6_2(
        KC_1,       KC_2,   KC_3,   KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,
        KC_TAB,		FR_A,   FR_Z,	FR_E,    	FR_R,    	FR_T,       FR_Y,       FR_U,		FR_I,		FR_O,   	FR_P,		KC_PSCR,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,    	FR_G,       FR_H,       FR_J,       FR_K,		FR_L,   	FR_M,		KC_DEL,
        KC_LCTL, 	FR_W,	FR_X, 	FR_C,    	FR_V,    	FR_B,       FR_N,  		FR_COMM,	FR_SCLN,	FR_COLN,	FR_EXLM,	KC_LALT,
									    		MO(1),      KC_ESC, 	KC_SPC,  	MO(2)
	),
};
//#ifdef SWAP_HANDS_ENABLE
//const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
    /* Left hand, matrix positions */
//    {{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}},
//    {{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}},
//    {{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
//    {{0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8}},
//    {{0, 9}, {1, 9}, {2, 9}, {3, 9}, {4, 9}, {5, 9}},
    /* Right hand, matrix positions */
//    {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
//    {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}},
//    {{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}},
//    {{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}},
//    {{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}}
//};