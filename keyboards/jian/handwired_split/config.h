/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC0DE
#define PRODUCT_ID      0x1337
#define DEVICE_VER      0x0010
#define MANUFACTURER    KgOfHedgehogs
#define PRODUCT         Huma
#define DESCRIPTION     An ergo handwired keyboard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 7
#define DIODE_DIRECTION COL2ROW

// wiring of each half
#define MATRIX_ROW_PINS { B5, B4, E6, D7 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6}

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

//#define USE_I2C
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1

/* #define SPLIT_HAND_PIN C6 */
#define SPLIT_HAND_PIN F4
