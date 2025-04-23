#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();


}

void loop() {
  String final = "Arun Roshan Tech";
  for (int i = 0; i < final.length(); i++) {
    for (int j = 0; j < 5; j++) {
      lcd.setCursor(i, 0);
      lcd.print(char(random(33, 126)));
      delay(30);
    }
    lcd.setCursor(i, 0);
    lcd.print(final[i]);
  }

}
