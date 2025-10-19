#include <Arduino.h>

//Utils
#include <PokemonBuildUtils.h>
#include <PokemonTeamUtils.h>

void setup() {
  pushPokemonToTeam(buildPokemon(1, 5));
  pushPokemonToTeam(buildPokemon(2, 5));
  pushPokemonToTeam(buildPokemon(3, 5));
  
  Serial.begin(9600);
}

void loop() {
  for (Pokemon pkmn : pokemonTeam) {
    Serial.print("Name: ");
    Serial.println(pkmn.name);
    Serial.print("Number: ");
    Serial.println(pkmn.id);
    Serial.print("Level: ");
    Serial.println(pkmn.level);
    Serial.print("Types: ");
    Serial.print(typeToString(pkmn.type[0]));
    Serial.print("/");
    Serial.print(typeToString(pkmn.type[1]));
  }
  
  delay(99999);
}