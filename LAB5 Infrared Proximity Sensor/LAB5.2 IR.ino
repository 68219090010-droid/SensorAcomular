/ LAB5.2 IR /
//  https://app.cirkitdesigner.com/project/e2b1c477-1871-4386-bd1a-ca35fbfeb521
  

#define sensorPin  8 // Pin connected to the sensor's OUT pin
#define ledPin  13    // Pin connected to the onboard LED


#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  pinMode(sensorPin, INPUT);  // Set the sensor pin as input
  pinMode(ledPin, OUTPUT);    // Set the LED pin as output
  Serial.begin(9600);         // Initialize serial communication for debugging
  lcd.init();
  lcd.backlight();
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("4x4 Keypad Test");
  lcd.setCursor(0, 1);
  lcd.print("Saharat");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = digitalRead(sensorPin);  // Read the sensor's output

  if (sensorValue == HIGH) {
    // Object detected
    digitalWrite(ledPin, HIGH);  // Turn on the LED
    Serial.println("Object detected!");
    lcd.setCursor(0, 1);
  lcd.print("Object detected!");
    

  } else {
    // No object detected
    digitalWrite(ledPin, LOW);   // Turn off the LED
    Serial.println("No object detected.");
    lcd.setCursor(0, 1);
  lcd.print("No object detected.");
  }

  delay(100);  // Small delay for stability
}
