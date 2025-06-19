#include <SoftwareSerial.h>

// SIM800L TX is connected to Arduino pin 10 (RX)
// SIM800L RX is connected to Arduino pin 9 (TX)
SoftwareSerial gsmSerial(10, 9);

void setup() {
  // Begin communication with GSM and Serial Monitor
  Serial.begin(9600);
  gsmSerial.begin(9600);

  delay(1000);  // Allow module to stabilize

  Serial.println("Initializing GSM module...");
  sendCommand("AT");           // Basic AT command
  sendCommand("AT+CMGF=1");    // Set SMS mode to text
  sendCommand("AT+CSCS=\"GSM\""); // Set character set
  delay(500);

  sendSMS("+1234567890", "Hello from Arduino! GSM working.");
}

void loop() {
  // Nothing to do in loop
}

// Function to send a command and wait for response
void sendCommand(String command, int wait = 1000) {
  gsmSerial.println(command);
  delay(wait);
  while (gsmSerial.available()) {
    Serial.write(gsmSerial.read());
  }
}

// Function to send an SMS
void sendSMS(String number, String message) {
  gsmSerial.println("AT+CMGF=1"); // Set SMS text mode
  delay(500);
  gsmSerial.print("AT+CMGS=\"");
  gsmSerial.print(number);
  gsmSerial.println("\"");
  delay(500);
  gsmSerial.print(message);
  delay(500);
  gsmSerial.write(26); // ASCII code for Ctrl+Z to send SMS
  delay(5000); // Give it time to send
}