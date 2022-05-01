const int LED=3;
float valorPot=0;

int pwmLED=0;
void setup(){
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
  
}
void loop(){
  valorPot=analogRead(A0);
  pwmLED=map(valorPot,0,1023,0,255);
  analogWrite(LED,pwmLED);

  Serial.print("Resistencia =");
  Serial.print(valor*10/1023,3);
  Serial.print("Kohms");
  Serial.print("\t Sortida PWM=");
  Serial.print(pwmLED);

  delay(20);
   }
