// TX
#include <Wire.h>

// Define the analog pin for LM35 sensor
const int lm35Pin = A0;

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate.
}

void loop() {
  // Read the analog value from the LM35 sensor
  int analogValue = analogRead(lm35Pin);
  
  // Convert the analog value to temperature in Celsius
  float temperature = (analogValue * 5.0 * 100.0) / 1024.0;
  
  // Send the temperature value to the receiver
  Serial.println(temperature);
  
  // Wait for 50 milliseconds before taking the next reading
  delay(50);
}
