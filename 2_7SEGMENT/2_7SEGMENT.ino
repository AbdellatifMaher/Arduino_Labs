byte seg2[]={6,5,4,3,2,1,0};
byte seg1[]={7,8,9,10,11,12,13};
//byte seg3[]=;
int i=0,j=0;
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
 pinMode(seg2[i],OUTPUT);
// pinMode(seg3[i],OUTPUT);
 } // put your setup code here, to run once:

}

void loop() {

  for(int count=0;count<=99;count++)
  {
    
  i=count %10;
  j=count /10 ;
  switch(i)
  {
       case 0 : ZERO(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
              break;
    case 1 : ONE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);// put your main code here, to run repeatedly:
              break;
    case 2 :  TWO(seg1); 
               break;
    case 3 :  THREE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
               break;
    case 4 : FOUR(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
              break;
    case 5 :  FIVE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
               break;
    case 6 :  SIX(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
               break;
    case 7 :  SEVEN(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
               break;
    case 8 :  EIGHT(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
               break;
    case 9 :  NINE(seg1[0],seg1[1],seg1[2],seg1[3],seg1[4],seg1[5],seg1[6]);
                 break;              
  }
     switch(j)
  {

    case 0 : ZERO(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
              break;
    case 1 : ONE(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);// put your main code here, to run repeatedly:
              break;
    case 2 :  TWO(seg2); 
               break;
    case 3 :  THREE(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
               break;
    case 4 : FOUR(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
              break;
    case 5 :  FIVE(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
               break;
    case 6 :  SIX(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
               break;
    case 7 :  SEVEN(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
              break;
    case 8 :  EIGHT(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
               break;
    case 9 :  NINE(seg2[0],seg2[1],seg2[2],seg2[3],seg2[4],seg2[5],seg2[6]);
                 break;               
  }

  delay(500);
  }


}

 







