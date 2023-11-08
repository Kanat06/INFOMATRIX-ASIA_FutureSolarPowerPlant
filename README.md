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

# Arduino Real-Time Clock (RTC) Control

This Arduino sketch utilizes the `iarduino_RTC` library to control an external RTC module, specifically DS1302, DS1307, or DS3231, and triggers an action based on predefined time settings.

## Description

The code initializes and configures an RTC module (in this case, configured for the DS1302 module) to keep track of real-time clock information, such as hours, minutes, and seconds. It defines specific times for events labeled as "Morning" and "Lunch" and performs actions (turning an output pin ON or OFF) when the current time matches these preset times.

## Functionality

The code involves the following components and functionalities:

### Components Used
- Arduino with RTC module (DS1302, DS1307, or DS3231)
- External output pin (Pin 12) for controlling an external device, LED, or similar output.

### Setup
- Initializes the serial communication at a baud rate of 9600.
- Begins the RTC module and sets the predefined times for "Morning" and "Lunch".

### Loop Operation
- Checks the current time based on the RTC module reading.
- Compares the current time with preset values for "Morning" and "Lunch".
- When the current time matches the preset times, it turns the output on and off accordingly.
- Outputs the current time via the serial monitor at a 1-second interval.

## Usage

To use this code:
- Connect the RTC module to the designated pins as defined in the code (RST, CLK, DAT for DS1302 or specific I2C pins for DS1307 and DS3231).
- Connect an external device or LED to Pin 12 for control.
- Upload this code to an Arduino board.

The code, as written, demonstrates basic time-based control functionality. Modify the preset times (s, f, g, h) according to your requirements for activating specific events at designated times.
## Usage

To use this code:
- Connect the LDRs to the specified analog pins (A0 to A3).
- Connect the motor driver to the digital pins according to the defined pin configurations.
- Upload this code to an Arduino board capable of analog and digital I/O.
