# LI-FI-Communication-System

This project involves creating a temperature monitoring system for a lift (elevator) using Arduino microcontrollers. The system consists of a transmitter (TX) and a receiver (RX) setup. The TX module reads temperature data from an LM35 temperature sensor and sends it to the RX module via serial communication. The RX module receives the temperature data and displays it on the Serial Monitor. This setup can be useful for monitoring and maintaining the temperature inside a lift to ensure comfort and safety.

Components:

Arduino Uno (TX)
Arduino Uno (RX)
LM35 Temperature Sensor
Wires and Breadboard
Serial Communication Link (USB or jumper wires)

Functionality:

Transmitter (TX) Module:
Reads the temperature from the LM35 sensor.
Converts the sensor's analog output to a temperature value in Celsius.
Sends the temperature value to the RX module via serial communication.

Receiver (RX) Module:
Receives the temperature data from the TX module.
Displays the received temperature on the Serial Monitor.
Provides real-time temperature monitoring inside the lift.
