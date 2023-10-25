/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT(K00, K01, K02, K03, K04, K05, K06, K07, K96, K95, K94, K93, K92, K91, K90, K10, K11, K12, K13, K14, K15, K16, K17, K87, K86, K85, K84, K83, K82, K81, K80, K20, K21, K22, K23, K24, K25, K26, K27, K76, K75, K74, K73, K72, K71, K70, K30, K31, K32, K33, K34, K35, K36, K37, K66, K65, K64, K63, K62, K61, K60, K40, K41, K42, K45, K55, K54, K53, K52, K51, K50) { \
  { K00, K01, K02, K03, K04, K05, K06, K07 }, \
  { K10, K11, K12, K13, K14, K15, K16, K17 }, \
  { K20, K21, K22, K23, K24, K25, K26, K27 }, \
  { K30, K31, K32, K33, K34, K35, K36, K37 }, \
  { K40, K41, K42, KC_NO, KC_NO, K45, KC_NO, KC_NO }, \
  { K50, K51, K52, K53, K54, K55, KC_NO, KC_NO }, \
  { K60, K61, K62, K63, K64, K65, K66, KC_NO }, \
  { K70, K71, K72, K73, K74, K75, K76, KC_NO }, \
  { K80, K81, K82, K83, K84, K85, K86, K87 }, \
  { K90, K91, K92, K93, K94, K95, K96, KC_NO } \
}
