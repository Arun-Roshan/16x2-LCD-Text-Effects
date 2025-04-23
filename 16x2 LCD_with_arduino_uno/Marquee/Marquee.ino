#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();


}

void loop() {
  String msg = "  Welcome to Arun Roshan Tech  ";
  for (int i = 0; i < msg.length(); i++) {
    lcd.setCursor(0, 0);
    lcd.print(msg.substring(i, i + 16));
    lcd.setCursor(0, 1);
    lcd.print(msg.substring((i + 16) % msg.length(), (i + 32) % msg.length()));
    delay(300);
  }
}
