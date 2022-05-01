#define pinLED 12
void setup() {
  pinMode(pinLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
 int v = analogRead(A0);
 if (v<600)digitalWrite(pinLED,HIGH);
 else digitalWrite(pinLED, LOW);
 Serial.println(v);
}
