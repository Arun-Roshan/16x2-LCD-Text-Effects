#include <Wire.h>

void setup() {
  Wire.begin();
  Serial.begin(9600);
  Serial.println("Scanning I2C devices...");
  for (byte i = 1; i < 127; i++) {
    Wire.beginTransmission(i);
    if (Wire.endTransmission() == 0) {
      Serial.print("Found device at 0x");
      Serial.println(i, HEX);
      delay(500);
    }
  }
}

void loop() {}
