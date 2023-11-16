byte in1=10;
byte in2=9;
byte in3=6;
byte in4=5;




void setup() {
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);    // put your setup code here, to run once:
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

}

void loop() {
      analogWrite(in1,0);
    analogWrite(in2,0);
    analogWrite(in3,0);
    analogWrite(in4,0);

 if(Serial.available())
 {
 
char  X= Serial.read();
  if(   X == 'B' || X == 'b'  )
  {
    analogWrite(in1,128);
    analogWrite(in2,0);
    analogWrite(in3,128);
    analogWrite(in4,0);
    delay(1000);
 }
 else if( X == 'F' || X == 'f' )
 {
    analogWrite(in2,128);
    analogWrite(in1,0);
    analogWrite(in4,128);
    analogWrite(in3,0);
    delay(1000);
  }
  else if( X == 'R' || X == 'r' )
  {
    analogWrite(in1,0);
    analogWrite(in2,0);
    analogWrite(in3,128);
    analogWrite(in4,0);
    delay(1000);
 }
  else if( X == 'L' || X == 'l' )
  {
    analogWrite(in1,128);
    analogWrite(in2,0);
    analogWrite(in3,0);
    analogWrite(in4,0);
    delay(1000);
  }
 
 }

}
