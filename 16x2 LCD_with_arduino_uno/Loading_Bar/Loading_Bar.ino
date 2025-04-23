#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();
  byte bar[8] = { B11111,B11111,B11111,B11111,B11111,B11111,B11111,B11111 };
  lcd.createChar(0, bar);

  lcd.setCursor(0, 0);
  lcd.print("Loading...");
  lcd.setCursor(0, 1);

  for (int i = 0; i < 16; i++) {
    lcd.write(byte(0));
    delay(200);
  } 

}

void loop() {

}
