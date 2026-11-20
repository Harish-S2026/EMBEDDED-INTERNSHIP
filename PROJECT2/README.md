# Register-Level GPIO Driver

## Objective
Control an LED using a push button by accessing
Arduino Uno GPIO registers directly without using
Arduino GPIO helper functions.

## Hardware
- Arduino Uno R3
- LED
- 220 Ohm resistor
- Push button

## Connections
- LED: D13 through 220 Ohm resistor to GND
- Button: D2 to GND

## Registers Used

| Register | Address | Function |
|----------|---------|----------|
| DDRB | 0x24 | Port B direction |
| PORTB | 0x25 | Port B output control |
| PINB | 0x23 | Port B input/toggle |
| DDRD | 0x2A | Port D direction |
| PORTD | 0x2B | Pull-up control |
| PIND | 0x29 | Port D input |

## Features
- Direct register access
- Volatile register pointers
- Bit manipulation
- Internal pull-up resistor
- Modular GPIO driver
- No digitalWrite()
- No pinMode()

## Working
When the button is pressed, the LED turns ON.
When the button is released, the LED turns OFF.

## Technology
- Embedded C
- GPIO
- AVR Registers
- Bit Manipulation
- ATmega328P

## Simulator
Tinkercad Circuits
