byte LED=13;
String X;
String Y;
void setup() {
 Serial.begin(9600);
 pinMode(LED,OUTPUT);
 while(!Serial)   
 {
       // put your setup code here, to run once:
 }
Serial.setTimeout(500);
}

void loop() {

  // put your main code here, to run repeatedly:
if( Serial.available() >0 )
{
   X =Serial.readString();
   Y= Serial.find("opening");
   if(X =="OPEN" )
  {
        digitalWrite(LED,HIGH);
    Serial.println("OPENED");
  }
   else if( X=="CLOSE")
  {
    digitalWrite(LED,LOW);
    Serial.println("CLOSED");

  }
  else 
  {
    Serial.println("ERROR");
  }
}
}
