#pragma once

#define IS_MOUSE_KEY             B00010000

// Synthetic, not internal
#define KEY_MOUSE_BTN_L MOUSE_LEFT // Synthetic key
#define KEY_MOUSE_BTN_M MOUSE_MIDDLE  // Synthetic key
#define KEY_MOUSE_BTN_R MOUSE_RIGHT  // Synthetic key


#define KEY_MOUSE_UP            B0000001
#define KEY_MOUSE_DOWN          B0000010
#define KEY_MOUSE_LEFT          B0000100
#define KEY_MOUSE_RIGHT         B0001000
#define KEY_MOUSE_WHEEL         B0010000
#define KEY_MOUSE_WARP          B0100000
#define KEY_MOUSE_WARP_END      B1000000
// all buttons end warp. also, we're out of bits
#define KEY_MOUSE_BUTTON        B1000000


#define Key_mouseWarpNW   (Key) { KEY_MOUSE_WARP| KEY_MOUSE_UP | KEY_MOUSE_LEFT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseWarpNE   (Key) { KEY_MOUSE_WARP| KEY_MOUSE_UP | KEY_MOUSE_RIGHT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseWarpSW   (Key) { KEY_MOUSE_WARP| KEY_MOUSE_DOWN | KEY_MOUSE_LEFT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseWarpSE   (Key) { KEY_MOUSE_WARP| KEY_MOUSE_DOWN | KEY_MOUSE_RIGHT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseWarpEnd  (Key) { KEY_MOUSE_WARP| KEY_MOUSE_WARP_END, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }


#define Key_mouseUpL      (Key) { KEY_MOUSE_UP | KEY_MOUSE_LEFT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseUp       (Key) { KEY_MOUSE_UP, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseUpR      (Key) { KEY_MOUSE_UP | KEY_MOUSE_RIGHT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseL        (Key) { KEY_MOUSE_LEFT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseR        (Key) { KEY_MOUSE_RIGHT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseDnL      (Key) { KEY_MOUSE_DOWN | KEY_MOUSE_LEFT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseDn       (Key) { KEY_MOUSE_DOWN, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseDnR      (Key) { KEY_MOUSE_DOWN | KEY_MOUSE_RIGHT, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseScrollUp (Key) { KEY_MOUSE_WHEEL | KEY_MOUSE_UP, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseScrollDn (Key) { KEY_MOUSE_WHEEL | KEY_MOUSE_DOWN, KEY_FLAGS|SYNTHETIC|IS_MOUSE_KEY }
#define Key_mouseScrollL
#define Key_mouseScrollR
#define Key_mouseBtnL     (Key) { KEY_MOUSE_BUTTON | KEY_MOUSE_BTN_L, KEY_FLAGS | SYNTHETIC | IS_MOUSE_KEY }
#define Key_mouseBtnM     (Key) { KEY_MOUSE_BUTTON | KEY_MOUSE_BTN_M, KEY_FLAGS | SYNTHETIC | IS_MOUSE_KEY }
#define Key_mouseBtnR     (Key) { KEY_MOUSE_BUTTON | KEY_MOUSE_BTN_R, KEY_FLAGS | SYNTHETIC | IS_MOUSE_KEY }
