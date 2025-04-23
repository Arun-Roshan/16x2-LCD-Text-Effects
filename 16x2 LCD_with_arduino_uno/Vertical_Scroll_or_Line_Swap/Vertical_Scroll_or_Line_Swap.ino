#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();// initialize the lcd 
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Line 1: Hello");
  lcd.setCursor(0, 1);
  lcd.print("Line 2: World");
  delay(2000);
  // Swap
  String top = "Line 1: Hello";
  String bottom = "Line 2: World";
  lcd.setCursor(0, 0);
  lcd.print(bottom);
  lcd.setCursor(0, 1);
  lcd.print(top);

}


void loop()
{

}
