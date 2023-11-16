void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char x =Serial.available();
  if(x > 0)
  {
    char C = Serial.read();
    if(C == 'A')
    {
        digitalWrite(3,HIGH);
        Serial.println("ON");
    }
     else if (C == 'B')
     {
        digitalWrite(3,LOW);
        Serial.println("OFF");
     }
     else if(C != '\n') {
      Serial.println("Incorrect INPUT");
     }
    else
    {
      
      }
  }
}
