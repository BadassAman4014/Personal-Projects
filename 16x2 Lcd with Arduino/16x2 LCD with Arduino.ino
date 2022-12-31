#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(10,9,8,7,6,5); // Create an LCD object. Parameters: (RS, E, D4, D5, D6, D7):
void setup() 
{
    lcd.begin(16, 2); // Specify the LCD's number of columns and rows. Change to (20, 4) for a 20x4 LCD 
	Serial.begin(9600);
  
}

void loop() 
{
 // For LCD Display
lcd.setCursor(0,0);
lcd.print(" Happy New Year");
lcd.setCursor(0,1);
lcd.print("    2K23 :)");
}