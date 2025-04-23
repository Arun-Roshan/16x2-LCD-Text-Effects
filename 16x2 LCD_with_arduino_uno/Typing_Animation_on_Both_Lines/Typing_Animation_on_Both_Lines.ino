#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  // put your setup code here, to run once:
  lcd.init();   // initialize the lcd 
  lcd.backlight();
  String top = "Welcome To";
  String bottom = "Arun Roshan Tech";

  for (int i = 0; i < top.length(); i++) {
    lcd.setCursor(i, 0);
    lcd.print(top[i]);
    delay(150);
  }
  for (int i = 0; i < bottom.length(); i++) {
    lcd.setCursor(i, 1);
    lcd.print(bottom[i]);
    delay(150);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
