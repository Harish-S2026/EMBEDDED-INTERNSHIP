#include "gpio.h"

int main(void)
{
    gpio_init();

    while (1)
    {
        if (gpio_read_button())
        {
            gpio_led_on();
        }
        else
        {
            gpio_led_off();
        }
    }
}
