byte R0LED =1 ;
byte R1LED= 2;
byte G0LED=4;
byte G1LED=5;
byte PUSH=3;

byte i=0;
byte j=5;

void setup() {
    pinMode(R0LED,OUTPUT);
    pinMode(R1LED,OUTPUT);
    pinMode(G0LED,OUTPUT);
    pinMode(G1LED,OUTPUT);
    pinMode(PUSH,INPUT_PULLUP);
   digitalWrite(G0LED,HIGH);
   digitalWrite(G1LED,HIGH);
 // put your setup code here, to run once:
attachInterrupt(digitalPinToInterrupt(PUSH),FIRSTSW,FALLING);

}

void loop() {
  // put your main code here, to run repeatedly:

}
void FIRSTSW(void)
{
 delayMicroseconds(50000);
 i++;
 switch(i)
 {
  case 1 : digitalWrite(R0LED,HIGH);break;
  case 2 : digitalWrite(R1LED,HIGH);break;
 }
 switch(j)
 {
  case 4 : digitalWrite(G0LED,LOW);break;
  case 5 : digitalWrite(G1LED,LOW);break;
 }
 j--;
 
 }

