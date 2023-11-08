# INFOMATRIX-ASIA_FutureSolarPowerPlant
# Motor Control System with Light Sensors

This Arduino code controls two DC motors using light-dependent resistors (LDRs) as sensors. The system adjusts the motors' speed and direction based on LDR readings to maintain a specific path or alignment.

## Description

The code configures a four-pin motor driver for the DC motors. Additionally, it uses four LDRs connected to analog input pins (A0 to A3) on the Arduino board to detect light intensity. These LDRs sense light variations and provide feedback for motor control.

## Functionality

### Hardware Configuration
- Pins for Motor Control:
  - Two pins for each motor (X and Y) control their direction.
  - Pins for speed control of each motor (ENA for Motor X, ENB for Motor Y).

### Loop Operation
- The code continuously reads analog values from the LDRs (top-left, top-right, bottom-left, bottom-right) to capture the surrounding light conditions.
- It calculates average values and differences between sensor pairs to determine deviations.

### Motor Control Logic
- Motor X Control:
  - Analyzes differences in the top and bottom sensor pairs along the X-axis to adjust the Motor X direction and speed.
- Motor Y Control:
  - Analyzes differences in the left and right sensor pairs along the Y-axis to adjust the Motor Y direction and speed.

### Motor Adjustment
- The code sets the direction (forward, reverse) and speed of each motor based on the sensor readings to ensure a specific path or alignment.

## Usage

To use this code:
- Connect the LDRs to the specified analog pins (A0 to A3).
- Connect the motor driver to the digital pins according to the defined pin configurations.
- Upload this code to an Arduino board capable of analog and digital I/O.
