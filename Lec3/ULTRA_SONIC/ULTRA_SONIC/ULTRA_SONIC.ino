#define TriggerPin 7
#define EchoPin    8
void setup() {
  // put your setup code here, to run once:
  pinMode(TriggerPin,OUTPUT);
  pinMode(EchoPin,INPUT);
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
   Serial.println(Distance);
   delay(1000);
}
