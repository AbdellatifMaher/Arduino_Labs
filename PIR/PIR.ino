byte X=0;
void setup() {
  // put your setup code here, to run once:
pinMode(11,INPUT);
pinMode(3,OUTPUT);
delay(10000);
}

void loop() {
  
 byte X=digitalRead(11); // put your main code here, to run repeatedly:
if(X == HIGH)
{
  digitalWrite(3,HIGH);
}
else 
{
  digitalWrite(3,LOW);
}
}
