int LDR_VAL = 0;

void setup() {
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  LDR_VAL = analogRead(A0);

  Serial.println(LDR_VAL);

  if (LDR_VAL > 500) {
    digitalWrite(10, HIGH);
  }
  else {
    digitalWrite(10, LOW);
  }

  delay(500);
}
