void setup()
{
  Serial.begin(9600);
}

void loop()
{
 int Lectura=analogRead(AO);
 Serial.println(Lectura);
 delay(200);
}
