#define m1 8
#define m2 9
#define m3 10
#define m4 12
#define m5 7
char state;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(m5,OUTPUT);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{ state=Serial.read();}
if(state=='F')
{ digitalWrite(m1,HIGH);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,HIGH);
}
else if(state=='W')
{ do 
  {digitalWrite(m5,HIGH);}while(Serial.available()>0);}
else if(state=='L')
{ digitalWrite(m1,LOW);
digitalWrite(m4,LOW); }
else if(state=='R')
{ digitalWrite(m2,LOW);
digitalWrite(m3,LOW); }
if(state=='S')
{digitalWrite(m1,LOW);
digitalWrite(m2,LOW);
digitalWrite(m3,LOW);
digitalWrite(m4,LOW);
digitalWrite(m5,LOW); }
if(Serial.available()>0)
{ state=Serial.read();}
}
