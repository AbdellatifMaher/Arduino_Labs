byte SEG[]={0b01111110,0b00110000,0b01101101,0b01111001,0b00110011,0b01011011,0b01011111,0b01110000,0b01111111,0b01111011};
void setup() {
  // put your setup code here, to run once:
DDRD=B11111111;

}

void loop() {
 for(int i=0;i<10;i++)
 {
    PORTD=SEG[i];
    delay(1000); // put your main code here, to run repeatedly:
 }

}
