/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define ZMK_LED_NUMLOCK_BIT BIT(0)
#define ZMK_LED_CAPSLOCK_BIT BIT(1)
#define ZMK_LED_SCROLLLOCK_BIT BIT(2)
#define ZMK_LED_COMPOSE_BIT BIT(3)
#define ZMK_LED_KANA_BIT BIT(4)

struct zmk_led_hsb {
    uint16_t h;
    uint8_t s;
    uint8_t b;
};

int zmk_stp_indicators_enable_batt();
int zmk_stp_indicators_disable_batt();