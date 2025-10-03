#include <Arduino.h>
#include <enum/Types.h>
#include <structs/Pokemon.h>

Pokemon pokemon;

void setup() {
  pokemon.name = "Bulbasaur";
  pokemon.id = 1;
  pokemon.level = 1;

  Serial.begin(9600);
}

void loop() {
  Serial.print("Name: ");
  Serial.println(pokemon.name);
  Serial.print("Number: ");
  Serial.println(pokemon.id);
  Serial.print("Level: ");
  Serial.println(pokemon.level);

  delay(99999);
}
