#include <softwareSerial.h>
byte RLED=6;
byte GLED=7;
string s;
void OPENREDLED(void)
{
  digitalWrite(RLED,HIGH);
}
void OPENGREENLED(void)
{
  digitalWrite(GLED,HIGH);
}
void CLOSEREDLED(void)
{
  digitalWrite(RLED,LOW);
}
void CLOSEGREENLED(void)
{
  digitalWrite(GLED,LOW);
}
void setup() {
  // put your setup code here, to run once:
   serial.begin(9600);
   pinMode(RLED,OUTPUT);
   pinMode(GLED,OUTPUT);
}

void loop() {
 while(serial.available())
 {
    delay(10);
    char C =serial.read();
    s +=C;
 }
  if(s.length() > 0)
  {
    if( s == OPENREDLED )
    {
      OPENREDLED();
    }
    else if( s == OPENGREENLED )
    {
      OPENGREENLED();
    }
     else if( s == CLOSEREDLED )
    {
      CLOSEREDLED();
    }
     else if( s == CLOSEGREENLED )
    {
      CLOSEGREENLED();
    }
  }
}
