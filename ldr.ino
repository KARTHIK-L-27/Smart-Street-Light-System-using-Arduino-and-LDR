int ldrPin = A0;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 500) {   // Night condition
    digitalWrite(led, HIGH);
  } else {                // Day condition
    digitalWrite(led, LOW);
  }

  delay(500);
}
