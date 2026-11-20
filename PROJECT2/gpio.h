#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

void gpio_init(void);
uint8_t gpio_read_button(void);
void gpio_led_on(void);
void gpio_led_off(void);
void gpio_led_toggle(void);

#endif
