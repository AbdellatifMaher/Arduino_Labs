  int X;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  X=digitalRead(2);
  if(X == HIGH)
    digitalWrite(3,HIGH);
   else
    digitalWrite(3,LOW);
}
