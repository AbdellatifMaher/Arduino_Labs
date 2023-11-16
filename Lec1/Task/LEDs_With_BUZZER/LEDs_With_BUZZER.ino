void setup() {
  // put your setup code here, to run once:
  for(char i=2;i<=4;i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 for( char j = 0 ; j<4;j++)
 {
  for(char i =2;i<=4;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
 }
 digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
 for(char j =0 ;j<4;j++)
 {
  for(char i =2;i<=4;i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(500);
  for(char i =2;i<=4;i++)
  {
    digitalWrite(i,LOW);
  }
  delay(500);
 }
  digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
 for( char j = 0 ; j<4;j++)
 {
  for(char i =2;i<=4;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
  }
  for(char i =4;i>=2;i--)
  {
    digitalWrite(i,LOW);
    delay(500);
  }
 }
 digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
}
