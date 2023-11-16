int x,y;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT);
  pinMode(2,INPUT);
  for(int i= 8;i<=10;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH)
  {
    Button1 : 
     for(char i =8;i<=10;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    if( digitalRead(3) == HIGH)
    {
      goto Button2 ;
    }
     
  }
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  }
  else if(digitalRead(3) == HIGH)
  {
    Button2 :
    for(char j =8;j<=10;j++)
  {
    digitalWrite(j,HIGH);
    delay(500);
    if(digitalRead(2) == HIGH)
    {
      goto Button1;
    }
  }
  for(char j =10;j>=8;j--)
  {
    digitalWrite(j,LOW);
    delay(500);
    if(digitalRead(2) == HIGH)
    {
      goto Button1;
    }
  }
  }
  else
  {
    
  }
}
