#include <Arduino.h>
#include <enum/Types.h>

Type type = FIRE;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(type == FIRE) {
    Serial.println("Fogo");
  }
}
