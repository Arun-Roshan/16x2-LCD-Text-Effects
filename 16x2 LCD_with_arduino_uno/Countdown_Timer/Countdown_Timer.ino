#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Countdown Timer");
}

void loop() {
  for (int i = 10; i >= 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("Time: 00:");
    if (i < 10) lcd.print("0");
    lcd.print(i);
    delay(1000);
  }

  lcd.setCursor(0, 1);
  lcd.print("Time's up!      ");
  delay(2000);
}
