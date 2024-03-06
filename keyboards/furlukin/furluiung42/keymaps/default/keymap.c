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
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,		FR_A,   FR_Z,	FR_E,    	FR_R,    				FR_T,           	FR_Y,       FR_U,		FR_I,		FR_O,   	FR_P,		KC_PSCR,
        KC_LSFT,	FR_Q,   FR_S, 	FR_D,    	FR_F,    				FR_G,           	FR_H,       FR_J,       FR_K,		FR_L,   	FR_M,		KC_DEL,
        KC_LCTL, 	FR_W,	FR_X, 	FR_C,    	FR_V,    				FR_B,       		FR_N,  		FR_COMM,	FR_SCLN,	FR_COLN,	FR_EXLM,	KC_LALT,
									MO(2),		MT(MOD_LGUI,KC_ENT),  	LT(MO(3),KC_ESC), 	KC_BSPC, 	KC_SPC, 	OSL(1)
	),
    [1] = LAYOUT_split_3x6_3(
        FR_AMPR,	FR_AGRV,	FR_EACU,	FR_EGRV,    FR_UGRV,	FR_QUOT,           	FR_LPRN,    KC_MINS,	FR_LBRC,	FR_RBRC,   	FR_AT,		KC_NO,
        FR_SUP2,	KC_NO,   	KC_NO, 		FR_CIRC,    FR_DIAE,    FR_DQUO,           	FR_MINS,	FR_UNDS,	FR_PIPE,	FR_PERC,	FR_ASTR,   	KC_NO,
        KC_NO, 		KC_NO,		KC_NO, 		FR_CCED,    KC_NO,    	KC_NO,       		FR_LABK,    FR_RABK, 	FR_BSLS,	FR_SLSH,	FR_LCBR,	FR_RCBR,
											MO(4),		KC_NO,  	KC_NO, 				KC_BSPC, 	KC_SPC, 	KC_NO
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_F1,		KC_F2,  KC_F3,	KC_F5,    	KC_F5,    	KC_F6,           	KC_PSLS,	KC_P7,		KC_P8,		KC_P9,   	KC_PAST,	KC_PMNS,
        KC_F7,		KC_F8,  KC_F9, 	KC_F10,    	KC_F11,    	KC_F12,           	KC_NO,     	KC_P4,      KC_P5,		KC_P6,   	KC_PSLS,	KC_PPLS,
        KC_LSFT, 	KC_NO,	KC_NO, 	KC_NO,    	KC_LALT,    KC_LALT,       		KC_NO,     	KC_P1, 		KC_P2,		KC_P3,		FR_DOT,		KC_PENT,
									KC_NO,		KC_NO,  	KC_NO, 				KC_NO, 		KC_P0, 		MO(4)
    ),
	[3] = LAYOUT_split_3x6_3(
        KC_NO,		KC_NO,  	KC_NO,		KC_NO,    	KC_NO,    	KC_NO,           	KC_NO,		KC_HOME,	KC_UP,		KC_END,   	KC_NO,		KC_NO,
        KC_NO,		KC_NO,  	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,           	KC_NO,     	KC_LEFT,    KC_DOWN,	KC_RIGHT,  	KC_NO,		KC_NO,
        KC_NO,	 	KC_NO,		KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,       		KC_NO,     	KC_NO, 		KC_NO,		KC_NO,		KC_NO,		KC_NO,
											KC_NO,		KC_NO,  	KC_NO, 				KC_NO, 		KC_NO, 		KC_NO
    ),
    [4] = LAYOUT_split_3x6_3(
        RCTL(KC_LALT),	KC_NO,   	KC_NO,		KC_NO,    	KC_NO,    	QK_BOOT,           	KC_NO,      KC_NO,		KC_NO,		KC_NO,   	KC_NO,		KC_DEL,
        KC_NO,			KC_NO,   	KC_NO, 		KC_NO,    	KC_NO,    	KC_NO,           	KC_NO,      KC_NO,     	KC_NO,		KC_NO,   	KC_NO,		KC_NO,
        KC_NO, 			KC_NO,		KC_NO, 		KC_NO, 		KC_NO,    	KC_NO,       		KC_NO,      KC_NO, 		KC_NO,		KC_NO,		KC_NO,		KC_NO,
												KC_NO,		KC_NO,  	KC_NO, 				KC_NO, 		KC_NO, 		KC_NO
    ),
};