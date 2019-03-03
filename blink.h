#ifndef _BLINK_H_
#define _BLINK_H_

typedef enum {
    LED_RED = 0b110,
    LED_GREEN = 0b101,
    LED_BLUE = 0b011,
    LED_PURPLE = 0b010,
    LED_YELLOW = 0b100,
    LED_CYAN = 0b001,
    LED_NONE = 0b111
} LEDColor;

BusOut led(P0_21, P0_22, P0_23);

inline void setLEDColor(int color)
{
    led = color;
}

#endif
