char GLED   = 7;
char YLED   = 3;
char RLED   = 4;
char WLED   = 5;
char BUZZER = 6;
char BUTTON = 2;
void OPEN_LED(void); 
void setup() {
 pinMode(RLED,OUTPUT);  // put your setup code here, to run once:
 pinMode(YLED,OUTPUT);
 pinMode(GLED,OUTPUT);
 pinMode(WLED,OUTPUT);
 pinMode(BUZZER,OUTPUT);
 pinMode(BUTTON,INPUT);
 attachInterrupt(digitalPinToInterrupt(BUTTON),OPEN_LED,RISING);
}

void loop() {
 digitalWrite(GLED,HIGH);
 digitalWrite(RLED,LOW);// put your main code here, to run repeatedly:
 delay(1000);
 digitalWrite(YLED,HIGH);
 digitalWrite(GLED,LOW);// put your main code here, to run repeatedly:
 delay(1000);
 digitalWrite(RLED,HIGH);
 digitalWrite(YLED,LOW);// put your main code here, to run repeatedly:
 delay(1000);

digitalWrite(BUZZER,HIGH);
  delay(1000);
  digitalWrite(BUZZER,LOW);
}

void OPEN_LED(void) 
{
    digitalWrite(WLED,HIGH);
    delayMicroseconds(100000);
 
  }

