/*
raindrop module digital output

🔌 Wiring
Rain Sensor Module	Arduino	Notes
VCC	5V	Power supply
GND	GND	Ground
DO (digital out)	D2 (example)	HIGH when dry, LOW when wet
AO (analog out)	A0 (optional)	Returns analog moisture level
*/

#define RAIN_SENSOR_DO_PIN 2

void setup() {
  pinMode(RAIN_SENSOR_DO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  int isRaining = digitalRead(RAIN_SENSOR_DO_PIN);
  if (isRaining == LOW) {
    Serial.println("💧 Drop of water detected!");
  } else {
    Serial.println("☀️ No water detected");
  }
  delay(1000);
}
