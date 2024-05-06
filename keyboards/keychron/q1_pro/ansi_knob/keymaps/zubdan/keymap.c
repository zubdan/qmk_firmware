/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN,
  WIN_NM,
  WIN_SP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [MAC_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LPAD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_LCMMD,MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [MAC_FN] = LAYOUT_ansi_82(
        KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,            RGB_TOG,
        KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_PRINT_SCREEN,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_END,
        KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),



    [WIN_BASE] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_LCTL,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,
       MO(WIN_NM),KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,MO(WIN_FN),MO(WIN_NM),KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_ansi_82(
        KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,            RGB_TOG,
     UC(0x00B0),  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_PRINT_SCREEN,
        RGB_TOG,  RGB_MOD,  RGB_VAI,UC(0x20AC), RGB_SAI,  RGB_SPI,  KC_TRNS, UC(0x00FC),KC_TRNS, UC(0x00F6),KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,UC(0x00E4),UC(0x00DF),RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_END,
        MO(WIN_SP),         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  UC_PREV,  UC_NEXT,  KC_TRNS,            MO(WIN_SP),  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

    [WIN_NM] = LAYOUT_ansi_82(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,             KC_MUTE,
        KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_BSPC,            KC_PRINT_SCREEN,
        KC_TAB,   KC_EQL,   KC_7,     KC_8,     KC_9,     KC_PLUS,  KC_PLUS,UC(0x00FC),UC(0x00E4),UC(0x00F6), KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_LCTL,  KC_0,     KC_4,     KC_5,     KC_6,     KC_MINS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_SCLN,  KC_QUOT,            KC_ENT,             KC_END,
     MO(WIN_SP),  KC_Z,     KC_1,     KC_2,     KC_3,   LSFT(KC_8), KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            MO(WIN_SP),  KC_UP,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_SP] = LAYOUT_ansi_82(
        KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,            RGB_TOG,
     UC(0x00B0),  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_PRINT_SCREEN,
        RGB_TOG,  RGB_MOD,  RGB_VAI,UC(0x20AC), RGB_SAI,  RGB_SPI,  KC_TRNS,UC(0x00DC),UC(0x00C4),UC(0x00D6),KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
        KC_TRNS,UC(0x00C4),UC(0x00DF),RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_END,
        MO(WIN_SP),         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  UC_PREV,  UC_NEXT,  KC_TRNS,            MO(WIN_SP),  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_NM] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_SP] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif // ENCODER_MAP_ENABLE
enum combos {
  FN_O_UMLAUT_UPPER,
  FN_O_UMLAUT,
  FN_U_UMLAUT_UPPER,
  FN_U_UMLAUT,
  FN_A_UMLAUT_UPPER,
  FN_A_UMLAUT,
  JK_ESC,
  DF_ENTER,
  KL_BKSP,
  SD_TAB,
};

const uint16_t PROGMEM oif[] = {KC_I, KC_F, KC_O, COMBO_END};
const uint16_t PROGMEM oi[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM uif[] = {KC_I, KC_F, KC_U, COMBO_END};
const uint16_t PROGMEM ui[] = {KC_I, KC_U, COMBO_END};
const uint16_t PROGMEM as[] = {KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM asj[] = {KC_S, KC_A, KC_J, COMBO_END};

//Escape, Tab, Backspace, OSM(FN)
const uint16_t PROGMEM jk[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM df[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM sd[] = {KC_S, KC_D, COMBO_END};

const uint16_t PROGMEM zx[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM xc[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM cv[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM vb[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM vbc[] = {KC_V, KC_B, KC,C, COMBO_END};

combo_t key_combos[] = {
  [FN_O_UMLAUT_UPPER] = COMBO(oif, UC(0x00D6)),
  [FN_O_UMLAUT] = COMBO(oi, UC(0x00F6)),
  [FN_U_UMLAUT_UPPER] = COMBO(uif, UC(0x00DC)),
  [FN_U_UMLAUT] = COMBO(ui, UC(0x00FC)),
  [FN_A_UMLAUT_UPPER] = COMBO(asj, UC(0x00C4)),
  [FN_A_UMLAUT] = COMBO(as, UC(0x00E4)),

  [JK_ESC] = COMBO(jk, KC_ESC),
  [KL_BKSP] = COMBO(kl, KC_BSPC),
  [DF_ENTER] = COMBO(df, KC_ENT),
  [SD_TAB] = COMBO(sd, KC_TAB),

  [ZX_BACK] = COMBO(df, C(KC_Z)),
  [XC_CUT] = COMBO(df, C(KC_X)),
  [CV_COPY] = COMBO(df, C(KC_C)),
  [VB_PASTE] = COMBO(df, C(KC_V)),
  [VBC_SHIFT_PASTE] = COMBO(df, S(C(KC_V))),
};

//COMB(FN_O_UMLAUT_UPPER,     UC(0x00D6),     KC_I, KC_F, KC_O)
//COMB(FN_O_UMLAUT,           UC(0x00F6),     KC_I, KC_O)
//COMB(FN_U_UMLAUT_UPPER,     UC(0x00DC),     KC_I, KC_F, KC_U)
//COMB(FN_U_UMLAUT,           UC(0x00FC),     KC_I, KC_U)
//COMB(FN_A_UMLAUT_UPPER,     UC(0x00C4),     KC_S, KC_A, KC_J)
//COMB(FN_A_UMLAUT,           UC(0x00E4),     KC_S, KC_A)
//COMB(FN_A_UMLAUT,           UC(0x00E4),     KC_S, KC_A)
//
//COMB(JK_ESC,                KC_ESC,         KC_J, KC_K)
//COMB(KL_BKSP,               KC_BSPC,        KC_K, KC_L)
//COMB(SD_TAB,                KC_TAB,         KC_D, KC_F)
//COMB(DF_ENTER,              KC_ENT,         KC_S, KC_D)
//
//COMB(ZX_BACK,               C(KC_Z),        KC_Z, KC_X)
//COMB(XC_CUT,                C(KC_X),        KC_X, KC_C)
//COMB(CV_COPY,               C(KC_C),        KC_C, KC_V)
//COMB(VB_PASTE,              C(KC_V),        KC_V, KC_B)
//COMB(VBC_SHIFT_PASTE,              S(C(KC_V)),     KC_V, KC_B, KC,C)
