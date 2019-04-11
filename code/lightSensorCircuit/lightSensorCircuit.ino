const int ledPin = 5;
const int ldrPin = A0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  
  if (ldrStatus <=80) {
    digitalWrite(ledPin, HIGH);
    Serial.println(ldrStatus);
    Serial.println("LDR is DARK, LED is ON");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println(ldrStatus);
    Serial.println("LED is OFF");
  }
}
