/*
Copyright 2019 Markus Fritsche <fritsche.markus@gmail.com>

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

#pragma once

#include "quantum.h"
#define XXX KC_NO

void matrix_init_user(void);

/*
   This is the mapping for a 102 key board using codeset 2.
   The code in matrix.c supports codeset 1 and codeset 3,
   but the mapping is not finished yet.
*/

#define LAYOUT_fullkey(\
K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B,  \
K0C, K0D, K0E, K0F, K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,  \
K1F, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K30, K31, K32, K33, K34,  \
K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K40, K41, K42, K43, K44, K45, K46, K47, K48, K49,  \
K4A, K4B, K4C, K4D, K4E, K4F, K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K5B,  \
K5C, K5D, K5E, K5F, K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6A, K6B, K6C, K6D, K6E,  \
K6F, K70, K71, K72, K73, K74, K75, K76, K77, K78, K79, K7A, K7B, K7C, K7D, K7E, K7F \
) { \
 { K00, K01, K02, K03, K04, K05, K06, K07,  \
  K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
 { K10, K11, K12, K13, K14, K15, K16, K17,  \
  K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
 { K20, K21, K22, K23, K24, K25, K26, K27,  \
  K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
 { K30, K31, K32, K33, K34, K35, K36, K37,  \
  K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
 { K40, K41, K42, K43, K44, K45, K46, K47,  \
  K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
 { K50, K51, K52, K53, K54, K55, K56, K57,  \
  K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
 { K60, K61, K62, K63, K64, K65, K66, K67,  \
  K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
 { K70, K71, K72, K73, K74, K75, K76, K77,  \
  K78, K79, K7A, K7B, K7C, K7D, K7E, K7F } \
}

//
// #define 83(\
// K0D, K0E, K0C, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2D, K31, K1A, \
// K0F, K10, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, KEF, K40, K41, K57, K46, K47, K48, K34, \
// K11, K10, K6F, K4B, K4C, K4D, K4E, K4F, K50, K51, K52, K53, K54, K55, K1F, K58, K59, K5A, K49, \
// K13, K14, K5C, K5D, K5E, K5F, K60, K61, K62, K63, K64, K65, K66, K67, K69, K33, K6B, K6C, K6D, \
// K15, K16, K71, K73, K4A, K7D, K7E \
// ) { \
//  { K00, K01, K02, K03, K04, K05, K06, K07,  \
//   K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
//  { K10, K11, K12, K13, K14, K15, K16, K17,  \
//   K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
//  { K20, K21, K22, K23, K24, K25, K26, K27,  \
//   K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
//  { K30, K31, K32, K33, K34, K35, K36, K37,  \
//   K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
//  { K40, K41, K42, K43, K44, K45, K46, K47,  \
//   K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
//  { K50, K51, K52, K53, K54, K55, K56, K57,  \
//   K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
//  { K60, K61, K62, K63, K64, K65, K66, K67,  \
//   K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
//  { K70, K71, K72, K73, K74, K75, K76, K77,  \
//   K78, K79, K7A, K7B, K7C, K7D, K7E, K7F } \
// }

// #define 84(\
// K0D, K0E, K1F, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K0C, K31, K1A, K1B, \
// K0F, K10, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K40, K41, K42, K46, K47, K48, K33, \
// K11, K12, K4A, K4B, K4C, K4D, K4E, K4F, K50, K51, K52, K53, K54, K55, K56, K57, K58, K59, K5A, K34, \
// K13, K14, K5C, K5D, K5E, K5F, K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K6B, K6C, K6D, K6E, \
// K15, K16, K6F, K71, K73, K76, K79, K7D, K7E \
// ) { \
//  { K00, K01, K02, K03, K04, K05, K06, K07,  \
//   K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
//  { K10, K11, K12, K13, K14, K15, K16, K17,  \
//   K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
//  { K20, K21, K22, K23, K24, K25, K26, K27,  \
//   K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
//  { K30, K31, K32, K33, K34, K35, K36, K37,  \
//   K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
//  { K40, K41, K42, K43, K44, K45, K46, K47,  \
//   K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
//  { K50, K51, K52, K53, K54, K55, K56, K57,  \
//   K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
//  { K60, K61, K62, K63, K64, K65, K66, K67,  \
//   K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
//  { K70, K71, K72, K73, K74, K75, K76, K77,  \
//   K78, K79, K7A, K7B, K7C, K7D, K7E, K7F } \
// }

// #define terminal(\
// K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
// K0D, K0E, K0F, K10, K11, K12, K13, K14, K15, K16, K17, K18, \
// K1E, K74, K1F, K20, K21, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K32, K30, K45, K0C, K31, K1A, K33, \
// K1D, K1B, K35, K36, K38, K39, K3A, K3B, K3C, K3D, K3E, K3F, K40, K41, K42, K44, K2E, K43, K46, K47, K48, K49, \
// K1C, K78, K5C, K5D, K5E, K5F, K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K7A, K2F, K7C, K6B, K6C, K6D, K6E, \
// K19, K78, K5C, K5D, K5E, K5F, K60, K61, K62, K63, K64, K65, K66, K67, K68, K69, K7A, K2F, K7C, K6B, K6C, K6D, K6E, \
// K70, K77, K6F, K71, K73, K75, K76, K79, K7B, K5B, K7D, K7E, K7F
// ) { \
//  { K00, K01, K02, K03, K04, K05, K06, K07,  \
//   K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
//  { K10, K11, K12, K13, K14, K15, K16, K17,  \
//   K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
//  { K20, K21, K22, K23, K24, K25, K26, K27,  \
//   K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
//  { K30, K31, K32, K33, K34, K35, K36, K37,  \
//   K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
//  { K40, K41, K42, K43, K44, K45, K46, K47,  \
//   K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
//  { K50, K51, K52, K53, K54, K55, K56, K57,  \
//   K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
//  { K60, K61, K62, K63, K64, K65, K66, K67,  \
//   K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
//  { K70, K71, K72, K73, K74, K75, K76, K77,  \
//   K78, K79, K7A, K7B, K7C, K7D, K7E, K7F } \
// }

typedef enum { NONE, PC_XT, PC_AT, PC_TERMINAL, PC_MOUSE } keyboard_kind_t;
#define KEYBOARD_KIND_STR(kind) \
    (kind == PC_XT ? "XT" :   \
     kind == PC_AT ? "AT" :   \
     kind == PC_TERMINAL ? "TERMINAL" :   \
     kind == PC_MOUSE ? "MOUSE" :   \
     "NONE")

extern const uint8_t map_cs1[MATRIX_ROWS][MATRIX_COLS];
extern const uint8_t map_cs2[MATRIX_ROWS][MATRIX_COLS];
extern const uint8_t map_cs3[MATRIX_ROWS][MATRIX_COLS];
