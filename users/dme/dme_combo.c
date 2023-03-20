#include QMK_KEYBOARD_H

// combos from bsag:
enum combo_events {
  // punctuation combos
  MINS_COMBO, // C+D
  USCR_COMBO, // H+,,
  SCLN_COMBO, // .+/
  COLN_COMBO, // z+x
  // braces
  LCBR_COMBO, // F+S
  LPRN_COMBO, // P+T
  LBRC_COMBO, // B+G
  RCBR_COMBO, // U+E
  RPRN_COMBO, // L+N
  RBRC_COMBO, // J+M
  // Other combos...
  COMBO_LENGTH
};

uint16_t COMBO_LEN = COMBO_LENGTH;

// punctuation combos
#ifdef COLEMAK
const uint16_t PROGMEM mins_combo[] = {KC_C, KC_D, COMBO_END};
const uint16_t PROGMEM uscr_combo[] = {KC_H, KC_COMM, COMBO_END};
#else
const uint16_t PROGMEM mins_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM uscr_combo[] = {KC_M, KC_COMM, COMBO_END};
#endif
const uint16_t PROGMEM scln_combo[] = {KC_DOT, KC_SLSH, COMBO_END};
const uint16_t PROGMEM coln_combo[] = {KC_Z, KC_X, COMBO_END};
// braces - vertical combos
#ifdef COLEMAK
const uint16_t PROGMEM lcbr_combo[] = {KC_F, LSFT_T(KC_S), COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_P, LGUI_T(KC_T), COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_B, KC_G, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_J, KC_M, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_L, LGUI_T(KC_N), COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_U, LSFT_T(KC_E), COMBO_END};
#else
const uint16_t PROGMEM lcbr_combo[] = {KC_E, LSFT_T(KC_D), COMBO_END};
const uint16_t PROGMEM lprn_combo[] = {KC_R, LGUI_T(KC_F), COMBO_END};
const uint16_t PROGMEM lbrc_combo[] = {KC_T, KC_G, COMBO_END};
const uint16_t PROGMEM rbrc_combo[] = {KC_Y, KC_H, COMBO_END};
const uint16_t PROGMEM rprn_combo[] = {KC_U, LGUI_T(KC_J), COMBO_END};
const uint16_t PROGMEM rcbr_combo[] = {KC_I, LSFT_T(KC_K), COMBO_END};
#endif

combo_t key_combos[] = {
  [MINS_COMBO] = COMBO(mins_combo, KC_MINS),
  [USCR_COMBO] = COMBO(uscr_combo, LSFT(KC_MINS)),
  [SCLN_COMBO] = COMBO(scln_combo, KC_SCLN),
  [COLN_COMBO] = COMBO(coln_combo, KC_COLN),
  [LCBR_COMBO] = COMBO(lcbr_combo, KC_LCBR),
  [LPRN_COMBO] = COMBO(lprn_combo, KC_LPRN),
  [LBRC_COMBO] = COMBO(lbrc_combo, KC_LBRC),
  [RCBR_COMBO] = COMBO(rcbr_combo, KC_RCBR),
  [RPRN_COMBO] = COMBO(rprn_combo, KC_RPRN),
  [RBRC_COMBO] = COMBO(rbrc_combo, KC_RBRC),
};
