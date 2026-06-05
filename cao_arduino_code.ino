#define ambulanceBtn 2
#define fireBtn 3
#define policeBtn 4
#define buzzer 8
void setup() {
  Serial.begin(9600);
  pinMode(ambulanceBtn, INPUT_PULLUP);
  pinMode(fireBtn, INPUT_PULLUP);
  pinMode(policeBtn, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  if (digitalRead(ambulanceBtn) == LOW) {
    Serial.println("AMBULANCE");
    tone(buzzer, 2000);
    delay(500);
    noTone(buzzer);
  }
  else if (digitalRead(fireBtn) == LOW) {
    Serial.println("FIRE");
    tone(buzzer, 1500);
    delay(500);
    noTone(buzzer);
  }
  else if (digitalRead(policeBtn) == LOW) {
    Serial.println("POLICE");
    tone(buzzer, 1000);
    delay(500);
    noTone(buzzer);
  }
}
