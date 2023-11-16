#include <Keypad.h>
#include <LiquidCrystal.h> 
byte RS=13;
byte E=12;
char key[4][4]= {
                  {'1','2','3','A'},
                  {'4','5','6','B'},
                  {'7','8','9','C'},
                  {'*','0','#','D'}
                };
byte rows[4]={7,6,5,4};
byte cols[4]={3,2,1,0};

  LiquidCrystal LCD(RS,E,11,10,9,8); 
  Keypad pad=Keypad(makeKeymap(key),rows,cols,4,4);

void setup() {
 
  // put your setup code here, to run once:
  LCD.begin(16,2); 
  LCD.setCursor(0,0); 
}

void loop() {
 char ch=pad.getKey();
 if(ch)    // put your main code here, to run repeatedly:
  {
    LCD.print(ch);
  }
}
