#pragma once

#define OS_DETECTION_KEYBOARD_RESET
#define OS_DETECTION_DEBOUNCE 200

#ifdef RGB_MATRIX_ENABLE
#  define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#  define RGB_MATRIX_KEYPRESSES
#  define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180 // Limit to vendor-recommended value
// RGB Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
// For effect indexes for json file, check load order in rgb_matrix_effects.inc,
// referenced by quantum/rgb_matrix/rgb_matrix.h
#  undef  ENABLE_RGB_MATRIX_ALPHAS_MODS
#  undef  ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#  undef  ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#  define ENABLE_RGB_MATRIX_BREATHING
#  define ENABLE_RGB_MATRIX_BAND_SAT
#  define ENABLE_RGB_MATRIX_BAND_VAL
#  undef  ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#  undef  ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#  undef  ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#  undef  ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#  define ENABLE_RGB_MATRIX_CYCLE_ALL
#  define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#  define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#  define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#  undef  ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#  undef  ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#  undef  ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#  undef  ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#  undef  ENABLE_RGB_MATRIX_DUAL_BEACON
#  undef  ENABLE_RGB_MATRIX_RAINBOW_BEACON
#  undef  ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#  undef  ENABLE_RGB_MATRIX_FLOWER_BLOOMING
#  undef  ENABLE_RGB_MATRIX_RAINDROPS
#  define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#  define ENABLE_RGB_MATRIX_HUE_BREATHING
#  undef  ENABLE_RGB_MATRIX_HUE_PENDULUM
#  undef  ENABLE_RGB_MATRIX_HUE_WAVE
#  define ENABLE_RGB_MATRIX_PIXEL_RAIN
#  define ENABLE_RGB_MATRIX_PIXEL_FLOW
#  define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
#  if defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
#    define ENABLE_RGB_MATRIX_TYPING_HEATMAP
#    undef  ENABLE_RGB_MATRIX_DIGITAL_RAIN
#  endif
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
#  if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
#    undef  ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#    undef  ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#    undef  ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#    undef  ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#    undef  ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#    undef  ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#  endif
//
#  undef  ENABLE_RGB_MATRIX_STARLIGHT
#  undef  ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT
#  undef  ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
#  define ENABLE_RGB_MATRIX_RIVERFLOW
#endif

#ifdef RGBLIGHT_ENABLE
#  define RGBLIGHT_LIMIT_VAL 150
#  define RGBLIGHT_EFFECT_BREATHE_MAX 150
#  define RGBLIGHT_EFFECT_ALTERNATING
#  define RGBLIGHT_EFFECT_BREATHING
#  define RGBLIGHT_EFFECT_CHRISTMAS
#  define RGBLIGHT_EFFECT_KNIGHT
#  define RGBLIGHT_EFFECT_RAINBOW_MOOD
#  define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#  define RGBLIGHT_EFFECT_RGB_TEST
#  define RGBLIGHT_EFFECT_SNAKE
#  define RGBLIGHT_EFFECT_STATIC_GRADIENT
#  define RGBLIGHT_EFFECT_TWINKLE
#endif
