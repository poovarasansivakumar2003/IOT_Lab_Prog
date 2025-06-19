#include <Stepper.h>

// --- Stepper Motor Settings ---
const int stepsPerRevolution = 2048; // adjust for your stepper
Stepper myStepper(stepsPerRevolution, 4, 6, 5, 7); // IN1-IN4

// --- DC Motor Pins ---
const int motorPin1 = 8;   // IN1
const int motorPin2 = 9;   // IN2
const int enablePin = 10;  // PWM (EN1)

void setup() {
  // DC Motor pins
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);

  // Stepper Motor speed (RPM)
  myStepper.setSpeed(10); // Adjust as needed

  Serial.begin(9600);
}

void loop() {
  // --- Drive DC Motor Forward ---
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  analogWrite(enablePin, 200); // Speed (0-255)

  delay(2000); // Run DC motor for 2 seconds

  // --- Stop DC Motor ---
  analogWrite(enablePin, 0);
  delay(1000);

  // --- Stepper Motor Forward ---
  Serial.println("Stepper forward");
  myStepper.step(stepsPerRevolution); // 1 full revolution
  delay(1000);

  // --- Stepper Motor Backward ---
  Serial.println("Stepper backward");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}
