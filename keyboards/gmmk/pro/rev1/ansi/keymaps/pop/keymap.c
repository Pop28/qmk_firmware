#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, KC_CAPS, KC_A, KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, KC_O, KC_QUOT, KC_ENT, KC_PGDN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_K, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[1] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_INS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, MO(2), KC_TRNS, KC_TRNS, KC_TRNS), 

[2] = LAYOUT(TG(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

[3] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_MUTE, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGDN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, MO(4), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[4] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_INS, RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, MO(5), KC_TRNS, KC_TRNS, KC_TRNS), 

[5] = LAYOUT(TG(3), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

const int ledSize = 8;
int leftSideLEDs[] = { 67, 70, 73, 76, 80, 83, 87, 91 };
int rightSideLEDs[] = { 68, 71, 74, 77, 81, 84, 88, 92 };

bool encoder_update_user(uint8_t index, bool clockwise) {
	switch (get_highest_layer(layer_state)) {
		case 0:
            if (clockwise) {
      			tap_code_delay(KC_VOLU, 4);}
            else {
      			tap_code_delay(KC_VOLD, 4);}
            break;
		case 1:
			if (clockwise) {
				rgb_matrix_increase_hue_noeeprom();}
			else {
				rgb_matrix_decrease_hue_noeeprom();}
            break;
        case 2:
            if (clockwise) {
				rgb_matrix_increase_val_noeeprom();}
			else {
				rgb_matrix_decrease_val_noeeprom();}
            break;
    	case 3:
    		if (clockwise) {
      			tap_code_delay(KC_VOLU, 4);}
    		else {
      			tap_code_delay(KC_VOLD, 4);}
    		break;
    	case 4:
            if (clockwise) {
				rgb_matrix_increase_hue_noeeprom();}
            else {
				rgb_matrix_decrease_hue_noeeprom();}
            break;
    	case 5:
            if (clockwise) {
				rgb_matrix_increase_val_noeeprom();}
			else {
				rgb_matrix_decrease_val_noeeprom();}
            break;
    }
	return false;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
	if (host_keyboard_led_state().caps_lock) {
		switch (get_highest_layer(layer_state)) {
			case 0:
				for (int i = 0; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 0, 180);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 0, 180);}
       			break;
			case 1:
				for (int i = 0; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 0, 180);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 0, 180);}
            	for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
            	break;
            case 2:
                for (int i = 0; i < 4; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 0, 180);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 0, 180);}
                for (int i = 4; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 200, 170);
            			rgb_matrix_set_color(rightSideLEDs[i], 255, 200, 170);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
                break;
            case 3:
                for (int i = 0; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 170);}
                break;
            case 4:
                for (int i = 0; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 170);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
                break;
            case 5:
				for (int i = 0; i < 4; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 170);}
                for (int i = 4; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 200, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 200, 170);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
                break;
        }
    }
   	else {
   		switch (get_highest_layer(layer_state)) {
			case 0:
				for (int i = 0; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 10, 40);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 10, 40);}
       			break;
			case 1:
				for (int i = 0; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 10, 40);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 10, 40);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
				break;
			case 2:
				for (int i = 0; i < 4; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 10, 40);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 10, 40);}
                for (int i = 4; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 200, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 200, 170);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
           		break;
           	case 3:
                for (int i = 0; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 24);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 24);}
                break;
            case 4:
				for (int i = 0; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 24);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 24);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
                break;
			case 5:
				for (int i = 0; i < 4; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 255, 24);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 255, 24);}
                for (int i = 4; i < 6; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 255, 200, 170);
            		rgb_matrix_set_color(rightSideLEDs[i], 255, 200, 170);}
                for (int i = 6; i < ledSize; i++) {
           			rgb_matrix_set_color(leftSideLEDs[i], 0, 0, 255);
            		rgb_matrix_set_color(rightSideLEDs[i], 0, 0, 255);}
           		break;
      		}
	}
	return false;
}