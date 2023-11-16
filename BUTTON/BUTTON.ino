 byte BUTTON = 2;
 byte WLED   = 5;
 byte RLED   = 4;
 byte light  = LOW;
 byte last   = LOW;
void setup() {

  pinMode(BUTTON,INPUT);
  pinMode(WLED,OUTPUT);
  digitalWrite(WLED,HIGH);
  digitalWrite(RLED,LOW);
}

void loop() {
 last =digitalRead(BUTTON); 
 if ( digitalRead(BUTTON) )
 {
  
  delay(70);
  if ( last == digitalRead(BUTTON) )
 {
  digitalWrite(WLED,light);
  digitalWrite(RLED,!light);
  light=!light;
  
 }
/* else{
  delay(50);
  digitalWrite(WLED,LOW);*/
 
 }
}
