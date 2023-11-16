#define TriggerPin 7
#define EchoPin    8
void setup() {
  // put your setup code here, to run once:
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT);
  for(char i=2;i<=4;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
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
   Serial.print(Distance);
   Serial.println(" cm");
   if(Distance < 5)
   {
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
   }
   else if ( Distance >= 5 && Distance < 25 )
   {
      digitalWrite(3,HIGH);
      digitalWrite(2,LOW);
      digitalWrite(4,LOW);
   }
   else   
   {
      digitalWrite(4,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(2,LOW);
   }
   delay(1000);
}
