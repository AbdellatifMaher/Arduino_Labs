//#include <SoftwareSerial.h>
byte RLED=6;
byte GLED=7;
String s;
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
   Serial.begin(9600);
   pinMode(RLED,OUTPUT);
   pinMode(GLED,OUTPUT);
}

void loop() {
 while( Serial.available())
 {
    delay(10);
    char C =Serial.read();
    s +=C;
 }
 Serial.println(s);
  if(s.length() > 0)
  {
    if( s == "OPEN " )
    {
      OPENREDLED();
    }
    else if( s == "open" )
    {
      OPENGREENLED();
    }
     else if( s == "CLOSE" )
    {
      CLOSEREDLED();
    }
     else if( s == "close 2" )
    {
      CLOSEGREENLED();
    }
  }
}
