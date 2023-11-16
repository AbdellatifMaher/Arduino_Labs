#define TriggerPin 7
#define EchoPin    10
void setup() {
  // put your setup code here, to run once:
  //motor 1
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  //mototr 2 
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  //Ultrasonic
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long Duration ;
  long Distance ;
  digitalWrite(TriggerPin,LOW);
  delay(1);
  
  digitalWrite(TriggerPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin,LOW);
   Duration = pulseIn(EchoPin,HIGH);
   Distance = Duration * 0.017 ;  // (Duration / (2 * 1000000)) * (340 * 100)
   if(Distance > 20)
   {
    analogWrite(3,150);
    analogWrite(5,0);
    //motor 2
    analogWrite(6,150);
    analogWrite(9,0);
   }
   else
   {
    analogWrite(3,255);
    analogWrite(5,255);
    //motor 2
    analogWrite(6,255);
    analogWrite(9,255);
    delay(10);
    //motor 1
  analogWrite(5,150);
  analogWrite(3,0);
  //motor 2
  analogWrite(9,150);
  analogWrite(6 ,0);
  delay(1000);
    //motor 1
  analogWrite(3,0);
  analogWrite(5,0);
  //motor 2
  analogWrite(6,0);
  analogWrite(9,0);
   }
}
