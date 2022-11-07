#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int potPin = A4;
int potValue = 0;
int buzzer = 6;
void setup() {
    lcd.begin(16, 2); // lcd rows and columns
    lcd.print("GAS SENSOR"); 
    pinMode(6, OUTPUT);
}
void loop() {
    potValue = analogRead(potPin);
    lcd.setCursor(0, 1);
    lcd.print("Value = ");
    lcd.print(potValue);
    delay(1000);
    lcd.print(" ");
    delay(1);
if (potValue>15)
{
    digitalWrite(6,HIGH);
    delay(1000);
  }
}
