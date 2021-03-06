/*
* Copyright (C) 2010 Andy M. aka h1uke	h1ukeguy @ gmail.com
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/


#ifndef _KEYDEFS_H_
#define _KEYDEFS_H_

/*
 * kindle DX Graphite keypad  and fiveway code definitions. At most values are
 * the same as found in linux/input.h
 * Note: the definitions below should be modified or extended simultaneously
 * with key code definitions found in launchpad.ini configuration file
 */
#define KPKEY_1  2
#define KPKEY_2  3
#define KPKEY_3  4
#define KPKEY_4  5
#define KPKEY_5  6
#define KPKEY_6  7
#define KPKEY_7  8
#define KPKEY_8  9
#define KPKEY_9  10
#define KPKEY_0  11
#define KPKEY_Q  16
#define KPKEY_W  17
#define KPKEY_E  18
#define KPKEY_R  19
#define KPKEY_T  20
#define KPKEY_Y  21
#define KPKEY_U  22
#define KPKEY_I  23
#define KPKEY_O  24
#define KPKEY_P  25
#define KPKEY_A  30
#define KPKEY_S  31
#define KPKEY_D  32
#define KPKEY_F  33
#define KPKEY_G  34
#define KPKEY_H  35
#define KPKEY_J  36
#define KPKEY_K  37
#define KPKEY_L  38
#define KPKEY_DEL  14
#define KPKEY_Z  44
#define KPKEY_X  45
#define KPKEY_C  46
#define KPKEY_V  47
#define KPKEY_B  48
#define KPKEY_N  49
#define KPKEY_M  50
#define KPKEY_DOT  52
#define KPKEY_SLASH  53
#define KPKEY_ENTER  28
#define KPKEY_SHIFT  42
#define KPKEY_ALT  56
#define KPKEY_SPACE  57
#define KPKEY_AA  90
#define KPKEY_SYM  94
#define KPKEY_VPLUS  115
#define KPKEY_VMINUS  114
#define KPKEY_HOME  98
#define KPKEY_PGBCK  109
#define KPKEY_PGFWD  124
#define KPKEY_MENU  139
#define KPKEY_BACK  91
#define KPKEY_FW_LEFT  105
#define KPKEY_FW_RIGHT  106
#define KPKEY_FW_UP  122
#define KPKEY_FW_DOWN  123
#define KPKEY_FW_PRESS  92

/* Kindle3-specific keys */
/* Row4 */
#define K3KEY_AA	190
#define K3KEY_SYM	126
#define K3KEY_HOME	102
#define K3KEY_BACK	158

/* Edge, left and right */
#define K3KEY_PGFWD	191
#define K3KEY_LPGBCK	193
#define K3KEY_LPGFWD	104

/* bottom edge. same codes as on DXG, but generated by dev/input/event2 */
#define K3KEY_VPLUS	115
#define K3KEY_VMINUS	114

/* FiveWay manipulator */
#define K3KEY_FW_UP	103
#define K3KEY_FW_DOWN	108
#define K3KEY_FW_PRESS	194

#define K3KEY_FW_LEFT	KPKEY_FW_LEFT
#define K3KEY_FW_RIGHT	KPKEY_FW_RIGHT



#define KEYDEFS_FILE	"keydefs.ini"

int get_default_input_keydefs(struct input_key *ptab, int *pcodes) ;
int get_input_keydefs(struct input_key *ptab, int *pcodes) ;

int get_key_substitute_code(int code) ;


#endif
