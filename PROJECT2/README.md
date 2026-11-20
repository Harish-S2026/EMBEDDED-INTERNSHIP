# Project 2: Register-Level GPIO Driver

## 1. Objective
To develop a GPIO driver using direct microcontroller register access without relying on Arduino GPIO helper functions.

## 2. Technologies Used
- Embedded C
- Arduino Uno R3
- ATmega328P
- Tinkercad Circuits
- GPIO Register Programming
- Bit Manipulation

## 3. Hardware Components
- Arduino Uno R3
- LED
- Push Button
- 220Ω Resistor

## 4. Pin Configuration

| Component | Arduino Pin |
|---|---|
| LED | D13 (PB5) |
| Push Button | D2 (PD2) |

## 5. Registers Used

| Register | Data Address | Function |
|---|---|---|
| DDRB | 0x24 | Port B direction |
| PORTB | 0x25 | Port B output |
| PINB | 0x23 | Port B input and output toggle |
| DDRD | 0x2A | Port D direction |
| PORTD | 0x2B | Port D pull-up configuration |
| PIND | 0x29 | Port D input |

## 6. Implementation

The project uses direct register access to configure input and output pins.

- DDR registers configure pin direction.
- PORT registers control output states and internal pull-ups.
- PIN registers read input states.
- Volatile pointers provide direct hardware register access.
- Bitwise operators modify individual register bits.

## 7. Operating Principle

The push button is connected to an input pin with an internal pull-up resistor.

When pressed, the input becomes LOW.

The program detects button presses and distinguishes between short and long presses.

### Short Press
The LED toggles its state whenever a short button press is detected.

### Long Press
The LED turns ON while the button is held and turns OFF when released.

## 8. Technical Concepts Learned

1. Direct register-level programming.
2. GPIO input and output configuration.
3. AVR register mapping.
4. Bitwise operations.
5. Volatile register pointers.
6. Internal pull-up resistors.
7. Button press detection.
8. Modular driver development.

## 9. Simulator

Tinkercad Circuits.

## 10. Expected Outcome

A working register-level GPIO implementation that controls an LED through push-button input without using Arduino digitalWrite() or pinMode() functions.

## 11. Platform Note

The ATmega328P uses DDRx, PORTx and PINx registers. STM32-specific registers such as MODER, ODR and BSRR are not available on the Arduino Uno.
