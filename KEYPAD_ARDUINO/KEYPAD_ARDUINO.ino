#include <Keypad.h>
#define RC 4
void keypadEvent(KeypadEvent key);
char pad[RC][RC]={ {'1','2','3','A'},{'4','5','6','B'},{'7','8','9','C'},{'*','0','#','D'}};

byte rows[RC]={9,8,7,6};
byte cols[RC]={5,4,3,2};

Keypad KEY=Keypad(makeKeymap(pad),rows,cols,RC,RC);

void setup() {
 Serial.begin(9600); 
 pinMode(13,OUTPUT); // put your setup code here, to run once:
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 //KEY.setDebounceTime(60);
// KEY.setHoldTime(60);
 //KEY.addEventListener(keypadEvent);
}

void loop() {

  char key = KEY.getKey();

  if (key) {
    Serial.println(key);
    switch(KEY.getState())
 {
  case PRESSED  : if (key == '3')
                  {
                    digitalWrite(13,!digitalRead(13));
                  }
                  switch(KEY.getState())
 {
  case PRESSED  : Serial.println("PRESSED");break;   //IDLE, PRESSED, RELEASED and HOLD.
  case RELEASED : Serial.println("RELEASED");break;
  case IDLE     : Serial.println("IDLE");break;
  case HOLD     : Serial.println("HOLD");break;
  default       : Serial.println("default");break;
 } 
                  break;
                  break; 
  case RELEASED : if (key == '*')
                  {
                    digitalWrite(12,!digitalRead(12));
                  }
                  switch(KEY.getState())
 {
  case PRESSED  : Serial.println("PRESSED");break;   //IDLE, PRESSED, RELEASED and HOLD.
  case RELEASED : Serial.println("RELEASED");break;
  case IDLE     : Serial.println("IDLE");break;
  case HOLD     : Serial.println("HOLD");break;
  default       : Serial.println("default");break;
 } 
                  break;
                  break; 
  case HOLD     : if (key == '0')
                  {
                    digitalWrite(11,!digitalRead(11));
                  }
                  switch(KEY.getState())
 {
  case PRESSED  : Serial.println("PRESSED");break;   //IDLE, PRESSED, RELEASED and HOLD.
  case RELEASED : Serial.println("RELEASED");break;
  case IDLE     : Serial.println("IDLE");break;
  case HOLD     : Serial.println("HOLD");break;
  default       : Serial.println("default");break;
 } 
                  break; 
  default       : Serial.println("NO");break;
 }
                  switch(KEY.getState())
 {
  case PRESSED  : Serial.println("PRESSED");break;   //IDLE, PRESSED, RELEASED and HOLD.
  case RELEASED : Serial.println("RELEASED");break;
  case IDLE     : Serial.println("IDLE");break;
  case HOLD     : Serial.println("HOLD");break;  
  }
  }
   
  
/* Serial.println(KEY.getKey()); // put your main code here, to run repeatedly:
 switch(KEY.getState())
 {
  case PRESSED  : Serial.println("PRESSED");break;   //IDLE, PRESSED, RELEASED and HOLD.
  case RELEASED : Serial.println("RELEASED");break;
  case IDLE     : Serial.println("IDLE");break;
  case HOLD     : Serial.println("HOLD");break;
  default       : Serial.println("default");break;
 } */
 
}

/*void keypadEvent(KeypadEvent key)
{
   switch(KEY.getState())
 {
  case PRESSED  : if (key == '3')
                  {
                    digitalWrite(13,!digitalRead(13));
                  }
                  break; 
  case RELEASED : if (key == '*')
                  {
                    digitalWrite(12,!digitalRead(12));
                  }
                  break; 
  case HOLD     : if (key == '0')
                  {
                    digitalWrite(11,!digitalRead(11));
                  }
                  break; 
  default       : Serial.println("default");break;
 }
}*/

