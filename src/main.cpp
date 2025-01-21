#include <Arduino.h>



const int adcPin = 34; 

void setup() {
  Serial.begin(115200); 
  pinMode(adcPin, INPUT); 
}

void loop() {
  int adcValue = analogRead(adcPin);
  float voltage = (adcValue / 4095.0) * 3.3; 
  
  
  Serial.print("ADC Value: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2); 
  Serial.println(" V");
  
  delay(500); 
}
