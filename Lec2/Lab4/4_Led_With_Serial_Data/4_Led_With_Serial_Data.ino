void setup() {
  // put your setup code here, to run once:
  for(int i = 3;i<=6;i++)
  {
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char X = Serial.available();
  if(X)
  {
    X=0;
    char C = Serial.read();
    if(C == '1')
    {
      digitalWrite(3,!digitalRead(3)); 
    }
    else if(C == '2')
    {
      digitalWrite(4,!digitalRead(4)); 
    }
    else if(C == '3')
    {
      digitalWrite(5,!digitalRead(5)); 
    }
    else if(C == '4')
    {
      digitalWrite(6,HIGH);
      delay(500);
      digitalWrite(6,LOW);
    }
    else if ( C != '\n')  
    {
      Serial.println(" NOoOoOoOoOoOo !!!!");
    }
  }
}
