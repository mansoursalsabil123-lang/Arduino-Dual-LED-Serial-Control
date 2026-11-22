# Arduino-Dual-LED-Serial-Control
Arduino project demonstrating serial communication and independent or simultaneous control of two LEDs using commands sent through the Serial Monitor.
# Arduino Dual LED Serial Control

An Arduino project demonstrating **serial communication** to control two LEDs using commands sent through the Serial Monitor.

## Project Overview

This project allows users to control two LEDs connected to an Arduino board through the Serial Monitor.

The Arduino receives commands from the serial interface and changes the state of the LEDs according to the received instructions.

## Features

- Serial communication between a computer and Arduino.
- Independent control of two LEDs.
- Turn LEDs ON or OFF using serial commands.
- Toggle both LEDs simultaneously.

## Hardware Components

- Arduino board
- 2 LEDs
- Connecting wires
- 2 current-limiting resistors
- USB cable

## Pin Configuration

| Component | Arduino Pin |
|---|---|
| LED 1 | Digital Pin 13 |
| LED 2 | Digital Pin 12 |

## Serial Commands

The project supports the following commands:

| Command | Function |
|---|---|
| `11` | Turn LED 1 ON |
| `10` | Turn LED 1 OFF |
| `21` | Turn LED 2 ON |
| `20` | Turn LED 2 OFF |
| `0` | Toggle both LEDs |

## How It Works

1. The Arduino configures pins 12 and 13 as outputs.
2. Serial communication starts at 9600 baud.
3. The user sends a command through the Serial Monitor.
4. The Arduino reads the received command.
5. Depending on the command, it changes the state of one or both LEDs.

## How to Run

1. Connect the LEDs to the Arduino board.
2. Open the project in Arduino IDE.
3. Select the correct Arduino board and COM port.
4. Upload the sketch.
5. Open the Serial Monitor.
6. Set the baud rate to **9600**.
7. Send one of the supported commands.

## Technologies

- Arduino
- C/C++
- Serial Communication
- Arduino IDE

## Project Status

Completed Arduino practice project focused on serial communication and digital output control.
