#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ir=A15;
int D0=46;
 int D1=47;
 int D2=48;
 int D3=49;
 int O1=50;
 int O2=51;
 int O3=52;
 int O4=53;
 void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  pinMode(ir,INPUT);
  pinMode(D0,INPUT);
  pinMode(D1,INPUT);
  pinMode(D2,INPUT);
  pinMode(D3,INPUT);
  pinMode(O1,OUTPUT);
  pinMode(O2,OUTPUT);
  pinMode(O3,OUTPUT);
  pinMode(O4,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() 
{
  
  if(analogRead(A15)<100){
  
            if(digitalRead(D0)==1 && digitalRead(D1)==0 && digitalRead(D2)==1 && digitalRead(D3)==0)
             {
              
             lcd.print("Forward");
             delay(500);
             lcd.clear();
  lcd.setCursor(0,1);
            digitalWrite(O1,HIGH);
            digitalWrite(O2,LOW);
            digitalWrite(O3,HIGH);
            digitalWrite(O4,LOW);
            
            }
            
            if(digitalRead(D0)==1 && digitalRead(D1)==0 && digitalRead(D2)==0 && digitalRead(D3)==0)
             { lcd.print("Left");
             delay(500);
             lcd.clear();
  lcd.setCursor(0,1);
             digitalWrite(O1,HIGH);
            digitalWrite(O2,LOW);
            digitalWrite(O3,LOW);
            digitalWrite(O4,LOW);
            delay(500);}
            
            if(digitalRead(D0)==0 && digitalRead(D1)==0 && digitalRead(D2)==1 && digitalRead(D3)==0)
             { lcd.print("Right");
             delay(500);
             lcd.clear();
  lcd.setCursor(0,1);
             digitalWrite(O1,LOW);
            digitalWrite(O2,LOW);
            digitalWrite(O3,HIGH);
            digitalWrite(O4,LOW);
            delay(500);}
            
            if(digitalRead(D0)==0 && digitalRead(D1)==0 && digitalRead(D2)==0 && digitalRead(D3)==0)
             { lcd.print("Stop");
             delay(500);
             lcd.clear();
  lcd.setCursor(0,1);
             digitalWrite(O1,LOW);
            digitalWrite(O2,LOW);
            digitalWrite(O3,LOW);
            digitalWrite(O4,LOW);
}}
else
{ lcd.print("obstacle detected");
 digitalWrite(O1,LOW);
            digitalWrite(O2,LOW);
            digitalWrite(03,LOW);
            digitalWrite(04,LOW);
  }}                                                                                                                                     
