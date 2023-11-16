void setup() {
  // put your setup code here, to run once:
  for(char i =3 ; i<6;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(char i =3;i<6;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
}
