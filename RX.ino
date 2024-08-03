// RX

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate.
}

void loop() {
  // Check if there is any data available to read from the serial port.
  if (Serial.available()) {
    String msg = ""; // Initialize an empty string to store the incoming message.
    
    // Read data from the serial port until no more data is available.
    while (Serial.available()) {
      msg += (char)Serial.read(); // Append each character to the message string.
    }
    
    // Print the received message to the Serial Monitor.
    Serial.print("Temperature: ");
    Serial.println(msg + " C"); // Add "C" to indicate Celsius.
  }
  
  // Wait for 50 milliseconds before checking for new data.
  delay(50);
}
