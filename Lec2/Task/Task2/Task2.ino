byte Buzzer = 8;
byte SW1 = 6;
byte SW2 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(SW1,INPUT);
  pinMode(SW1,INPUT);
  pinMode(Buzzer,OUTPUT);
  for(char i=2;i<=4;i++)
  {
    pinMode(i,OUTPUT);
  }
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Welcome To Our Smart Controlling System");
  Serial.println("Please Enter Your Username");
  while(1)
  {
    if(Serial.available() > 0)
  {
    break;
  }
  }
  
  String Name = Serial.readString();
  Name.trim();
  if(Name == "Abdo")
  {
      bool flag = false ;
      for(byte i = 0; i<4; i++)
      {
        Serial.println("Please Enter Your Password");
        while(1)
        {
          if(Serial.available() > 0)
         {
          break;
         }
        }
        String password = Serial.readString();
        password.trim();
        if( password == "13499")
        {
          flag = true;
          break;
        }
        if( i != 3)
        Serial.println("Wrong Password , Tryagain");
        
      }
      if(flag)
      {
        Serial.println("Choose Your Lab");
        Serial.println("For Lab1 Click 1");
        Serial.println("For Lab1 Click 2");
        Serial.println("For Lab1 Click 3");
       while(1)
       {
        if(Serial.available() > 0)
        {
          break;
        }
       }
        char C = Serial.read();
        if( C == '1')
        {
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
        }
        else if ( C == '2')
        {
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
          
        }
        else if ( C == '3')
        {
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
        }
        else
        {
          
        }
        
      }
      else
      {
        Serial.println("Block for 2 seconds");
        digitalWrite(Buzzer,HIGH);
        delay(2000);
        Serial.println("For Remove the Block Click on Switch 1 ");
        Serial.println("For Turnoff the Block Click on Switch 2 ");
        while(1)
        {
        byte S1 = digitalRead(SW1);
        byte S2 = digitalRead(SW2);
        if(S1 == HIGH)
        {
           digitalWrite(Buzzer,LOW);
        }
        else if (S2 == HIGH)
         {
          break;
         }
        }
       }
  }
      
  else
  {
    Serial.println("Wrong Username, Tryagain");
  }
}
