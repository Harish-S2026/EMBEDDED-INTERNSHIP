#include <stdint.h>

#define DDRB_REG   (*(volatile uint8_t *)0x24)
#define PORTB_REG  (*(volatile uint8_t *)0x25)
#define PINB_REG   (*(volatile uint8_t *)0x23)

#define DDRD_REG   (*(volatile uint8_t *)0x2A)
#define PORTD_REG  (*(volatile uint8_t *)0x2B)
#define PIND_REG   (*(volatile uint8_t *)0x29)

#define LED_PIN 5
#define BUTTON_PIN 2

void gpio_init()
{
    DDRB_REG |= (1 << LED_PIN);
    DDRD_REG &= ~(1 << BUTTON_PIN);
    PORTD_REG |= (1 << BUTTON_PIN);
    PORTB_REG &= ~(1 << LED_PIN);
}

uint8_t gpio_read_button()
{
    return !(PIND_REG & (1 << BUTTON_PIN));
}

void gpio_led_on()
{
    PORTB_REG |= (1 << LED_PIN);
}

void gpio_led_off()
{
    PORTB_REG &= ~(1 << LED_PIN);
}

void gpio_led_toggle()
{
    PINB_REG = (1 << LED_PIN);
}

void setup()
{
    gpio_init();
}

void loop()
{
    static uint8_t previous = 0;
    static uint8_t led_state = 0;
    static uint8_t long_press = 0;
    static unsigned long start_time = 0;

    uint8_t current = gpio_read_button();

    // Button pressed
    if (current && !previous)
    {
        start_time = millis();
        long_press = 0;
    }

    // Long press detected
    if (current && !long_press &&
        millis() - start_time >= 500)
    {
        long_press = 1;
        led_state = 1;
        gpio_led_on();
    }

    // Button released
    if (!current && previous)
    {
        if (!long_press)
        {
            led_state = !led_state;

            if (led_state)
                gpio_led_on();
            else
                gpio_led_off();
        }
        else
        {
            led_state = 0;
            gpio_led_off();
        }
    }

    previous = current;
}
