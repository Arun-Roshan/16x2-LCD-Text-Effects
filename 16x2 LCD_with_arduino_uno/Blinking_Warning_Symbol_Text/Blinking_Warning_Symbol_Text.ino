#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();


}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("!! ALERT !!");
  lcd.setCursor(0, 1);
  lcd.print("Obstacle Ahead");

  for (int i = 0; i < 5; i++) {
    lcd.noDisplay();
    delay(300);
    lcd.display();
    delay(300);
  }

}
