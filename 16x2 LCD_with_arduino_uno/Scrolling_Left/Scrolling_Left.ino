#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();// initialize the lcd 
  lcd.backlight();
  
}


void loop()
{
  lcd.setCursor(1, 0);
  lcd.print("Scrolling Left  ");
  lcd.setCursor(0, 1);
  lcd.print("Arun Roshan Tech");

  for (int i = 0; i < 16; i++) {
    lcd.scrollDisplayLeft();
    delay(300);
  }
}
