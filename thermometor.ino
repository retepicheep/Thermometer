#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int sensorPin = A0;
const int switchPin = 6;
int switchState = LOW;

void setup()
{
  Serial.begin(9600); // open a serial port
  lcd.begin(16, 2);
  lcd.print("Welecome to the");
  lcd.setCursor(0, 1);
  lcd.print("Heatstat");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Heatstat");
  lcd.setCursor(0, 1);
  lcd.print("Please wait");
  delay(1500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Please wait");
  lcd.setCursor(0, 1);
  lcd.print(">");
  delay(100)
  lcd.setCursor(0, 2);
  lcd.print(">");
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.setCursor(0, 1);
  lcd.print("-");
  delay(100);
  lcd.clear();
  lcd.print("Degrees F: ");
}

void loop()
{
  // convert the ADC reading to voltage
  int sensorVal = analogRead(sensorPin);
  float voltage = (sensorVal / 1024.0) * 5.0;
  float temperature = (((voltage - .5) * 100) * 1.8) + 32;
  lcd.setCursor(0, 0);
  lcd.setCursor(0, 1);
  lcd.print(temperature);
  delay(100);
}