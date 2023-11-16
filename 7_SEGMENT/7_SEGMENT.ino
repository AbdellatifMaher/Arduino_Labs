byte seg1[7]={2,3,4,5,6,7,8};
void ZERO(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
}
void ONE(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
}
void TWO(byte *X)
{
  for(int j=0;j<7;j++)
  {
    if( j==2 || j==5)
    {
      digitalWrite(X[j],LOW);
    }
    else{
      digitalWrite(X[j],HIGH);
    }
  }
}
void THREE(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
}
void FOUR(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void FIVE(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void SIX(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void SEVEN(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
}
void EIGHT(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void NINE(byte A,byte B,byte C,byte D,byte E,byte F,byte G)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
}
void setup() {
 for(int i=0;i<7;i++)
 {
 pinMode(seg1[i],OUTPUT);   // put your setup code here, to run once:
 }
}

void loop() {
 ZERO(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 ONE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);// put your main code here, to run repeatedly:
 delay(1000);
 TWO(seg1);
 delay(1000);
 THREE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 FOUR(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 FIVE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 SIX(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 SEVEN(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 EIGHT(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
 NINE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
 delay(1000);
}
