#include QMK_KEYBOARD_H



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0 
 * ,-----------------------------------------------------------------------------------.
 * | Esc|   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab|   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "     |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl | "|"  | Alt  | GUI  |  L1  |  Space    | L2  | Ctrl | Left |  Right | Shift |
 * `-----------------------------------------------------------------------------------'
 */

	KEYMAP(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
		KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
		KC_LCTL, KC_BSLS, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_SPC, MO(2), KC_LCTL, KC_LCTL, KC_LEFT, KC_LSFT),

    /* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |   (  |   )  |      |      |   1!  |  2@ |   3#  |   -  | +   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |   {  |   }  |      |      |   4$ |   5% |   6^  |   . |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|      |      |   [  |  ]   |      |      |   7& |   8% |  9(   | 0)  | *    |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Ctrl |     |       |  Alt  | Press |           |  L3 | Left | Down |  =    |  /   |
 * `-----------------------------------------------------------------------------------'
 */

	KEYMAP(
KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_MINS, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_PDOT, KC_PMNS, KC_LSFT, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_0, KC_PAST, KC_LCTL, KC_NO, KC_NO, KC_LALT, KC_TRNS, KC_NO, KC_NO, MO(3), KC_NO, KC_NO, KC_EQL, KC_PSLS
		),
    /* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | F1   |  F2  |  F3  |   F4  |  F5 |  F6  | F7  |  F8  |  F9  |  F10 |  F11  |  F12  |
 * |------+------+------+------+------+------+------+------+------+------+------+------ |
 * |      |      |      |      |      |      |      |     | left | down |   up  | right |
 * |------+------+------+------+------+------+------+------+------+------+------+------ |
 * |      |      |      |      |      |      |      |     |      |      |       |       |
 * |------+------+------+------+------+------+------+------+------+------+------+------ |
 * | RESET|      |      |      |      |      |      |     |      |      |       |       |
 * `-----------------------------------------------------------------------------------'
 */
	KEYMAP(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};



