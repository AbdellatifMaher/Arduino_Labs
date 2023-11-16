 int SEN=A0;
 float X=0;
 
void setup() {
 Serial.begin(9600); // put your setup code here, to run once:
 
}

void loop() {
  
  X= analogRead(SEN); 
  X = (X * 0.489 ); // put your main code here, to run repeatedly:
 Serial.println(X);
  delay(500);
}
