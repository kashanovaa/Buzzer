const int BUTTON_PIN = 2;
const int BUZZER_PIN = 8;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);  // pressed = LOW
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    tone(BUZZER_PIN, 1000);   // 1 kHz while held
  } else {
    noTone(BUZZER_PIN);       // silent the moment it's released
  }
}
