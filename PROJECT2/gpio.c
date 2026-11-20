#include "gpio.h"

#define DDRB_REG   (*(volatile uint8_t *)0x24)
#define PORTB_REG  (*(volatile uint8_t *)0x25)
#define PINB_REG   (*(volatile uint8_t *)0x23)

#define DDRD_REG   (*(volatile uint8_t *)0x2A)
#define PORTD_REG  (*(volatile uint8_t *)0x2B)
#define PIND_REG   (*(volatile uint8_t *)0x29)

#define LED_PIN     5
#define BUTTON_PIN  2

void gpio_init(void)
{
    /* Configure LED pin PB5 as output */
    DDRB_REG |= (1 << LED_PIN);

    /* Configure button pin PD2 as input */
    DDRD_REG &= ~(1 << BUTTON_PIN);

    /* Enable internal pull-up resistor */
    PORTD_REG |= (1 << BUTTON_PIN);

    /* Initially turn OFF LED */
    PORTB_REG &= ~(1 << LED_PIN);
}

uint8_t gpio_read_button(void)
{
    /* Button is active LOW */
    return !(PIND_REG & (1 << BUTTON_PIN));
}

void gpio_led_on(void)
{
    PORTB_REG |= (1 << LED_PIN);
}

void gpio_led_off(void)
{
    PORTB_REG &= ~(1 << LED_PIN);
}

void gpio_led_toggle(void)
{
    PINB_REG = (1 << LED_PIN);
}
