#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorPin = A0;
const int switchPin = 6;
int switchState = LOW;

void setup()
{
  Serial.begin(9600); // open a serial port
  lcd.begin(16, 2);
  lcd.print("Thermometor");
  delay(1000);
}

void loop()
{
  // convert the ADC reading to voltage
  int sensorVal = analogRead(sensorPin);
  float voltage = (sensorVal / 1024.0) * 5.0;
  float temperature = (((voltage - .5) * 100) * 1.8) + 32;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Degrees F: ");
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  delay(100);
}
