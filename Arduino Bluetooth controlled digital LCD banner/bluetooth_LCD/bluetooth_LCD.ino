#include <LiquidCrystal.h>

char str[34],L=2;
int temp=0,i=0;
int Pass=0,p=0;
int c,x,d;
const int rs = 5, en = 3, d4 = A5, d5 = A4, d6 = A3, d7 = A2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
 Serial.begin(9600);
  pinMode(A1,OUTPUT);
  pinMode(A0,OUTPUT);
   pinMode(4,OUTPUT);
   
  digitalWrite(A1,LOW); 
  digitalWrite(A0,LOW); 
  digitalWrite(4,LOW); 
  lcd.begin(16, 2);
}


void loop() 
{ 
  if(temp==1)
  {
    check();
     temp=0;
    i=0;
    delay(1000);
  }
  
}

void serialEvent() 
 {
      while (Serial.available()) 
      {
      char inChar=Serial.read();
      str[i++]=inChar;
      delay(10);
      }
       for (p=i+1;p<34;p++)
      {
        str[i++]=32;
      }
    temp=1;
  Serial.write(str);
  lcd.setCursor(0, 0);
 lcd.print(str);
  if(i>16)
  {
    d=16;
    for (x=0;x<=17;x++)
    {
    lcd.setCursor(x,2);
    lcd.print(str[d]);
    d++;
    }
  }
 }

void check()
{
if(!(strncmp(str,"1",1)))
  {
   digitalWrite(A1,50); 
   lcd.clear(); 
  }
  else if(!(strncmp(str,"2",1)))
  {
   digitalWrite(A1,LOW);
   lcd.clear(); 
  }
}
