#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();
  

}

void loop() {
String msg = "-> Arun <-";
  int len = msg.length();

  for (int i = 0; i <= 16 - len; i++) {
    lcd.clear();
    lcd.setCursor(i, 0);
    lcd.print(msg);
    delay(150);
  }
  for (int i = 16 - len; i >= 0; i--) {
    lcd.clear();
    lcd.setCursor(i, 1);
    lcd.print(msg);
    delay(150);
  }
}
