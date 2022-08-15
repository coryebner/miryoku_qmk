// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(GAME2,  "Game2") \
MIRYOKU_X(GAME3,  "Game3")

#define MIRYOKU_LAYER_MEDIA \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        DF(U_GAME),        RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           DF(U_FUN),         DF(U_MEDIA),       U_NA,              OUT_AUTO,          U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        DF(U_GAME),        U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_CAPS,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
U_NA,              KC_ALGR,           DF(U_NUM),         DF(U_NAV),         U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
RESET,             DF(U_TAP),         DF(U_EXTRA),       DF(U_BASE),        U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
U_NA,              KC_ALGR,           DF(U_SYM),         DF(U_MOUSE),       U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

#define MIRYOKU_LAYER_GAME \
KC_1,              KC_2,              KC_3,              KC_4,              KC_5,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_LSFT,           KC_A,              KC_W,              KC_D,              KC_F,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_LCTL,           KC_Z,              KC_S,              KC_C,              KC_V,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              LT(U_GAME2,KC_ESC),KC_SPC,            LT(U_GAME3,KC_TAB),DF(U_BASE),        KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_GAME2 \
KC_6,              KC_7,              KC_8,              KC_9,              KC_0,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_LSFT,           KC_A,              KC_W,              KC_D,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_LCTL,           KC_X,              KC_S,              KC_B,              KC_N,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              DF(U_BASE),        KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYER_GAME3 \
KC_F1,             KC_F2,             KC_F3,             KC_F4,             KC_F5,             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_LSFT,           KC_A,              KC_W,              KC_D,              KC_F6,             KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_LCTL,           KC_Q,              KC_S,              KC_M,              KC_COMM,           KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              DF(U_BASE),        KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME2 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME3 MIRYOKU_MAPPING