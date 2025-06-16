// Red -> Green -> Yellow cycle

const int redPin = 8;
const int yellowPin = 9;
const int greenPin = 10;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

// Helper function to turn on only one LED at a time
void setLight(int redState, int yellowState, int greenState, int duration) {
  digitalWrite(redPin, redState);
  digitalWrite(yellowPin, yellowState);
  digitalWrite(greenPin, greenState);
  delay(duration);
}

void loop() {
  setLight(HIGH, LOW, LOW, 1000);   // Red ON
  setLight(LOW, LOW, HIGH, 1000);   // Green ON
  setLight(LOW, HIGH, LOW, 1000);   // Yellow ON
}
