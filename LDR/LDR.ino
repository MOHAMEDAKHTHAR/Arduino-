#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define IR_SENSOR_PIN A2  // IR sensor connected to digital pin 2

LiquidCrystal_I2C lcd(0x27, 16, 2);  // LCD address might be 0x3F on some modules

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("IR Sensor Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  int irValue = digitalRead(IR_SENSOR_PIN);

  lcd.setCursor(0, 0);
  lcd.print("Status:");

  lcd.setCursor(0, 1);
  if (irValue == HIGH) { 
    lcd.print("Object DETECTED ");
  } else {
    lcd.print("NO OBJECT");
  }

  delay(500);
}