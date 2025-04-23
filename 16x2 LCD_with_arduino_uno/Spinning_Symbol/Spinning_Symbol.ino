#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup() {
  lcd.init();   // initialize the lcd 
  lcd.backlight();


}

void loop() {
  char spinner[] = {'|', '/', '-', '\\'};

  for (int i = 0; i < 20; i++) {
    lcd.setCursor(15, 1);
    lcd.print(spinner[i % 4]);
    delay(200);
  }

}
