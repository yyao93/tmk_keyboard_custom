#include "keymap_common.h"
#include "led.h"
#include "action_layer.h"

/*
 * HHKB Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap 0: Default Layer
     * ,-----------------------------------------------------------.
     * |~  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |
     * |-----------------------------------------------------------|
     * |FN0  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |Backsp|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|   Up     |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space           |AltGr|Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        FN0, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        BSPC,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,           UP, \
        LCTL,LGUI,LALT,          SPC,                     RALT,LEFT,DOWN,RGHT),

    /* Keymap 1: FN0 Layer
     * ,-----------------------------------------------------------.
     * |ESC | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Backsp|
     * |-----------------------------------------------------------|
     * |FN0  |   |   |   |Pscr|  |INS|⇤ | ↑ | ⇥ | ⤒ |   |   |FN1 |
     * |-----------------------------------------------------------|
     * |BSPC  | V0| V-| V+|   |   |DEL |← | ↓ |→ |⤓  |   |Return |
     * |-----------------------------------------------------------|
     * |Shift  |⟸| ⏸ |⟹|   |   |    |   |    |MENU|   |   Up   |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Space           |AltGr|Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,TRNS,TRNS,TRNS,PSCR,TRNS,INS, HOME, UP ,END ,PGUP,TRNS,FN2, FN1, \
        TRNS,MUTE,VOLD,VOLU,TRNS,TRNS,DEL ,LEFT,DOWN,RGHT,PGDN,TRNS,     TRNS,  \
        TRNS,MPRV,MPLY,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,MENU,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    // Layer for jumpnbump
    /* Keymap 1: FN1 Layer mouse key
     * ,-----------------------------------------------------------.
     * |    |   |   |   |   |   |   |   |   |   |  |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | M1| ↑ | M2|    |   |   |    |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |    |← | ↓ |→ |   |   |       |
     * |-----------------------------------------------------------|
     * |Shift  |   |   |   |   |   |    | M4| M3| M5|    |    UP   |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Click           |AltGr|Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    // KEYMAP_ANSI(
    //   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //   TRNS,TRNS,   I,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    //   TRNS,   J,   K,   L,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     NLCK, \
    //   TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,            P8, \
    //   TRNS,TRNS,TRNS,          TRNS,                    TRNS,  P4,  P5,  P6),

    // Layer for overcooked Single player
    /* Keymap 1: FN1 Layer mouse key
     * ,-----------------------------------------------------------.
     * |    |   |   |   |   |   |   |   |   |   |  |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   | , |   |   |   |   |   |   |   |    |   |   |    |
     * |-----------------------------------------------------------|
     * |      | A | ; | h |   |   |    |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |Shift  |   |   |   |   |   |    |   |   |   |    |    UP   |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Click           |AltGr|Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
          SPC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
         TRNS,TRNS,TRNS,          LSFT,                    TRNS,TRNS,TRNS,TRNS),

    // Layer for overcooked
    /* Keymap 1: FN1 Layer mouse key
     * ,-----------------------------------------------------------.
     * |    |   |   |   |   |   |   |   |   |   |  |   |   |       |
     * |-----------------------------------------------------------|
     * |     |   | , |   |   |   |   |   |   |   |    |   |   |    |
     * |-----------------------------------------------------------|
     * |      | A | ; | h |   |   |    |   |   |   |   |   |       |
     * |-----------------------------------------------------------|
     * |Shift  |   |   |   |   |   |    |   |   |   |    |    UP   |
     * |-----------------------------------------------------------|
     * |Ctrl|Gui |Alt |      Click           |AltGr|Left|Down|Right|
     * `-----------------------------------------------------------'
     */
    KEYMAP_ANSI(
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,TRNS,COMM,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
         TRNS,   A,SCLN,   H,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     NLCK, \
         TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RSFT,TRNS,TRNS,            UP, \
         TRNS,TRNS,TRNS,          RALT,                    RCTL,LEFT,DOWN,RGHT),

};

/*
 * Note:
 * Up, Left, Down, Right can be set to FN1~4 when combined with FN0
  */

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    /* [0] = ACTION_LAYER_ON_OFF(1) */
    [0] = ACTION_LAYER_TAP_KEY(1, KC_TAB),
    [1] = ACTION_LAYER_TOGGLE(3),
    [2] = ACTION_LAYER_TOGGLE(2),
};

#ifdef KEYMAP_IN_EEPROM_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif

// vim: ts=4 sts=4 sw=4 expandtab
