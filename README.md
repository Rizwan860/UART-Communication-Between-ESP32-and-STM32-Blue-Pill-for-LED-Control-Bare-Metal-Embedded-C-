# UART Communication Between ESP32 and STM32 Blue Pill

## Overview

This project demonstrates UART communication between an ESP32 DevKit V1 and an STM32 Blue Pill (STM32F103C8T6) using bare-metal Embedded C (memory-mapped registers).

The ESP32 receives commands from the Serial Monitor and sends them over UART to the STM32. The STM32 decodes the commands and controls two external LEDs connected to PA4 and PA5.

---

## Features

- Bare-metal programming (No HAL)
- UART communication between two microcontrollers
- Memory-mapped register programming
- GPIO configuration
- Command-based LED control
- Two external LEDs
- Simple UART command parser

---

## Hardware Used

- ESP32 DevKit V1
- STM32 Blue Pill (STM32F103C8T6)
- ST-Link V2
- Breadboard
- Jumper wires
- Two LEDs
- Two 220Ω resistors

---

## UART Connections

| ESP32 | STM32 |
|--------|--------|
| GPIO17 (TX2) | PA10 (USART1 RX) |
| GPIO16 (RX2) | PA9 (USART1 TX) |
| GND | GND |

---

## LED Connections

Blue LED

PA5 → 220Ω → LED → GND

Green LED

PA4 → 220Ω → LED → GND

---

## UART Configuration

UART Peripheral : USART1

Baud Rate : 9600

Data Bits : 8

Parity : None

Stop Bits : 1

Communication : Polling

---

## Supported Commands

| Command | Action |
|----------|--------|
| B | Blue LED ON |
| b | Blue LED OFF |
| G | Green LED ON |
| g | Green LED OFF |
| A | Both LEDs ON |
| a | Both LEDs OFF |
| L | Blink both LEDs |

---

## Software Used

Arduino IDE

STM32 Bare-Metal Embedded C

ST-Link Utility

---

## Working Principle

1. User types a command in the ESP32 Serial Monitor.
2. ESP32 sends the command over UART.
3. STM32 receives the UART data.
4. STM32 decodes the command.
5. STM32 controls the LEDs.

---

## Skills Demonstrated

- Embedded C Programming
- Bare-Metal STM32 Programming
- UART Protocol
- Register-Level Programming
- GPIO Configuration
- Debugging
- Microcontroller Interfacing
- Embedded System Design

---

## Future Improvements

- UART Interrupts
- DMA Communication
- LCD Display
- Sensor Interface
- Relay Control
- Motor Control
- FreeRTOS Integration

---
