#include <Arduino.h>
#include "AD5593R.h"
#include <Wire.h>
void setup() {
  
  Wire.begin(1,2);
  Serial.begin(115200);
  initADAC(0x10, 1, 1);
  setDACpin(0);
  setADCpin(1);
  setDACVal(0, 2000);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(readADC(1));
}
