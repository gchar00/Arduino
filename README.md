# Arduino Projects - Sensors & Microsystems Technology

## Project Overview

This repository contains various Arduino projects created as part of the **Sensors & Microsystems Technology** module. The projects involve designing circuits with analog and digital inputs/outputs and implementing code to simulate real-world applications using the Arduino UNO board and Tinkercad for circuit simulation. All the code was written in C++ using Arduino IDE software.  

## Table of Contents
- [Project 1: Blink](#project-1-blink)
- [Project 2: Physical Pixel](#project-2-physical-pixel)
- [Project 3: Flame Simulation](#project-3-flame-simulation)
- [Project 4: Piano](#project-4-piano)
- [Project 5: Temperature Sensor TMP36](#project-5-temperature-sensor-tmp36)
- [Project 6: Hall Effect Sensor SS49](#project-6-hall-effect-sensor-ss49)
- [Project 7: Light Sensor](#project-7-light-sensor)

## Project 1: Blink

**Objective:**  
This project introduces the basics of working with the Arduino UNO board by controlling the onboard LED. The goal is to blink the LED at different intervals and send an SOS signal in Morse code.

**Key Tasks:**
1. Use `delay()` to control the on/off state of the LED.
2. Implement Morse code for SOS using LED blinks.

## Project 2: Physical Pixel

**Objective:**  
Control an external LED using serial communication between the Arduino and a computer.

**Key Tasks:**
1. Set up serial communication at 9600 bps.
2. Turn the LED on/off based on serial input: 'H'/'h' to turn it on and 'L'/'l' to turn it off.

## Project 3: Flame Simulation

**Objective:**  
Simulate the flickering effect of a flame using 6 LEDs.

**Key Tasks:**
1. Randomize the delay and brightness for each LED to simulate a fire's flickering effect.
2. Use PWM pins for analog control.

## Project 4: Piano

**Objective:**  
Create a simple piano using buttons to play musical notes through a buzzer.

**Key Tasks:**
1. Assign buttons to specific notes (D, F, G).
2. Control the frequency sent to the buzzer based on the pressed button.

## Project 5: Temperature Sensor TMP36

**Objective:**  
Read temperature data from the TMP36 sensor and display the result through LEDs.

**Key Tasks:**
1. Use the analog output from the TMP36 sensor to control the state of LEDs based on the temperature range.
2. Implement analog-to-digital conversion using the Arduino's ADC capabilities.

## Project 6: Hall Effect Sensor SS49

**Objective:**  
Detect the presence of a magnetic field using the Hall Effect Sensor and display the magnetic field intensity in millitesla (mT).

**Key Tasks:**
1. Map the voltage readings from the sensor to a range of -1000 to 1000 Gauss.
2. Light up an LED based on the strength of the detected magnetic field.

## Project 7: Light Sensor

**Objective:**  
Use a photoresistor to control the brightness of an LED or the frequency of a buzzer.

**Key Tasks:**
1. Read the light intensity using a photoresistor and adjust the LED brightness accordingly.
2. Modify the circuit to change the buzzer frequency based on light intensity.


