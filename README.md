# Arduino LED Blinking using Digital GPIO

## 1. Project Overview
This project demonstrates a basic LED blinking application using an Arduino Uno R3. It introduces fundamental embedded systems concepts, including GPIO configuration, digital output control and time delays.

## 2. Objective
- Understand Arduino Uno GPIO functionality.
- Configure a digital pin as an output.
- Control an LED using digital signals.
- Understand the execution of setup() and loop() functions.

## 3. Components Required
- Arduino Uno R3
- LED
- 220 Ω Resistor
- Jumper Wires

## 4. Circuit Connections

| Arduino / Component | Connection |
|---|---|
| Digital Pin 13 | 220 Ω Resistor |
| Resistor | LED Anode (+) |
| LED Cathode (-) | Arduino GND |

## 5. Working Principle
The Arduino configures digital pin 13 as an output. The LED is switched ON by sending a HIGH signal and switched OFF by sending a LOW signal.

A delay of 1000 milliseconds is introduced between each state. The loop function continuously repeats this process, producing a blinking effect.

## 6. Programming Concepts

- **pinMode():** Configures a GPIO pin as INPUT or OUTPUT.
- **digitalWrite():** Sets the digital output to HIGH or LOW.
- **delay():** Introduces a time delay in milliseconds.
- **setup():** Executes once during initialization.
- **loop():** Executes repeatedly.

## 7. Technical Specifications

| Parameter | Details |
|---|---|
| Microcontroller | ATmega328P |
| Development Board | Arduino Uno R3 |
| Programming Language | Embedded C/C++ |
| GPIO Pin | Digital Pin 13 |
| Output Type | Digital |
| ON Duration | 1000 ms |
| OFF Duration | 1000 ms |
| Simulation Platform | Tinkercad Circuits |

## 8. Memory Utilization

| Memory Type | Total Capacity | Program Usage |
|---|---|---|
| Flash Memory | 32 KB | To be updated after compilation |
| SRAM (RAM) | 2 KB | To be updated after compilation |

## 9. Simulation
The project was implemented and tested using Tinkercad Circuits.

**Simulation Link:** Add your public Tinkercad link here after publication.

## 10. Expected Outcome
The LED continuously blinks with an ON duration of one second and an OFF duration of one second.

## 11. Applications
- Basic GPIO testing
- Microcontroller output verification
- Embedded system prototyping
- Learning digital signal control

## 12. Conclusion
This project demonstrates the fundamental operation of GPIO pins in an Arduino-based embedded system. It provides practical experience in digital output control, basic Embedded C/C++ programming and microcontroller simulation.
