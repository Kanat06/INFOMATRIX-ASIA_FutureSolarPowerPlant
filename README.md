# INFOMATRIX-ASIA_FutureSolarPowerPlant
Motor Control System with Light Sensors
This Arduino code is designed to control two DC motors using light-dependent resistors (LDRs) as sensors. The system adjusts the motors' speed and direction based on the readings from the LDRs to maintain a specific path or alignment.

Description
The code is configured to utilize a four-pin motor driver for the DC motors. It also employs four LDRs connected to analog input pins (A0 to A3) on the Arduino board to detect light intensity. These LDRs are placed in such a way that they can sense light variations and provide feedback for motor control.

Functionality
Hardware Configuration:

Pins for Motor Control:
Two pins are dedicated to each motor (X and Y) for controlling their direction.
Pins for speed control of each motor (ENA for Motor X, ENB for Motor Y).
Loop Operation:

The code operates in a continuous loop.
Reads analog values from the LDRs (top-left, top-right, bottom-left, bottom-right) to capture the surrounding light conditions.
Calculates average values and differences between sensor pairs to determine deviations.
Motor Control Logic:

Motor X Control:
Analyzes the differences in the top and bottom sensor pairs along the X-axis to adjust the Motor X direction and speed.
Motor Y Control:
Analyzes the differences in the left and right sensor pairs along the Y-axis to adjust the Motor Y direction and speed.
Motor Adjustment:

The code sets the direction (forward, reverse) and speed of each motor based on the sensor readings to ensure a specific path or alignment.
Usage
To utilize this code:

Connect the LDRs to the specified analog pins (A0 to A3).
Connect the motor driver to the digital pins according to the defined pin configurations.
Upload this code to an Arduino board capable of analog and digital I/O.
Note
This code serves as a foundational example for a light-based motor control system and can be expanded or modified for various robotics or automation projects that involve light-sensitive motor adjustments.

Feel free to modify and adapt the code according to your specific project requirements.

This README.md provides a brief explanation of the code functionality, how to use it, and a note on its adaptability for different projects. Adjust and expand upon it according to your specific context or additional functionalities.
