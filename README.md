# Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller

## Overview
This Arduino project controls the brightness of an LED based on input from an ultrasonic distance sensor and a sound sensor. The LED's brightness is dynamically adjusted according to the distance detected by the ultrasonic sensor and the sound level measured by the sound sensor. This project is ideal for visualizing how environmental factors such as distance and sound impact LED brightness.

## Components Required
1. Arduino Uno
2. LED
3. HC-SR04 Ultrasonic Sensor
4. Sound Sensor
5. Breadboard
6. Jumper wires

## Circuit Diagram
A visual circuit diagram of the project is available. The diagram shows the connections between the Arduino, LED, ultrasonic sensor, and sound sensor. Refer to the diagram for proper setup:
https://github.com/akarunkumar0001/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller/blob/main/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller%20hardware%20implementation.jpg

## Code
Here is the Arduino code used in this project:
https://github.com/akarunkumar0001/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller/blob/main/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller.ino

## Output
A sample of the outputs from the Serial Monitor and Serial Plotter are attached below:

**Serial Monitor**
In the Serial Monitor, you will see output similar to:
https://github.com/akarunkumar0001/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller/blob/main/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller%20serial%20monitor.jpg

**Serial Plotter**
In the Serial Plotter, you will see a similar graphical representation of the data over time:
https://github.com/akarunkumar0001/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller/blob/main/Ultrasonic-Sound-Sensor-Driven-LED-Brightness-Controller%20serial%20plotter.jpg

## Instructions

**Connect the Components**

**1. LED:**

> Connect the LED anode (long leg) to Digital Pin 5 on the Arduino.
>  Connect the LED cathode (short leg) to GND on the Arduino.

**2. HC-SR04 Ultrasonic Sensor:**

> Connect VCC to 5V on the Arduino.
> Connect GND to GND on the Arduino.
> Connect TRIG to Digital Pin 2 on the Arduino.
> Connect ECHO to Digital Pin 3 on the Arduino.

**3. Analog Sound Sensor:** 

> Connect VCC to 5V on the Arduino.
> Connect GND to GND on the Arduino.
> Connect OUT to Analog Pin A0 on the Arduino.

**Upload the Code:**
> Open the Arduino IDE.
> Copy and paste the code provided above into a new sketch.
> Select the appropriate board and port from the Tools menu.
> Upload the sketch to your Arduino.

**Monitor Data:**
> Open the Serial Monitor in the Arduino IDE (set the baud rate to 9600) or Serial Plotter (Tools -> Serial Plotter).
> Observe the real-time data for distance, sound level, and LED brightness.

## Note
> If the LED brightness is not as expected, modify the map() function parameters or the maximum/minimum values in your code.

## License
This project is open-source. Feel free to use and modify it according to your needs.

## Contact
For any questions or issues, please contact me at technocratarunkumar0001@gmail.com.
