byte L1=0;
byte L2=1;
byte L3=2;
byte B=3;
float val;

void setup() {
pinMode(L1,OUTPUT);
pinMode(L2,OUTPUT);
pinMode(L3,OUTPUT);
pinMode(B,OUTPUT);  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
 val=analogRead(A0);
 Serial.println(val);
 if(val > 60.00 ) // put your main code here, to run repeatedly:
  {
    digitalWrite(L1,HIGH);
    digitalWrite(L2,HIGH);
    digitalWrite(L3,HIGH);
    digitalWrite(B,HIGH);
    delay(500);
    digitalWrite(B,LOW);
  }
  else
  {
        digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
  }
}
