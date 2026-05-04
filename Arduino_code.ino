
int ledPins[] = {8, 9, 10, 11, 12};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available() >= 5) {
    for (int i = 0; i < 5; i++) {
      byte value = Serial.read();   // value is 0 or 1
      digitalWrite(ledPins[i], value == 1 ? HIGH : LOW);
    }
  }
}



