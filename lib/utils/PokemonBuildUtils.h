#ifndef POKEMONBUILDUTILS_H
#define POKEMONBUILDUTILS_H

//Structs
#include "structs/Pokemon.h"
#include "structs/PokemonBase.h"

//Maps
#include "PokemonMap.h"

Pokemon buildPokemon(int id, int level) {
    Pokemon pokemon;
    PokemonBase base = pokemonMap[id];
    
    pokemon.id = id;
    pokemon.level = level;
    pokemon.name = "Bulbasaur"; // TODO: Placeholder, should map id to name
    pokemon.type[0] = base.type[0];
    pokemon.type[1] = base.type[1];
    pokemon.baseExp = base.baseExp;

    pokemon.exp = 0; // TODO: Placeholder, calculate!
    pokemon.nextLevelExp = 100; // TODO: Placeholder, calculate!
    
    //Stats
    pokemon.hp.base = base.hp;
    pokemon.attack.base = base.attack;
    pokemon.defense.base = base.defense;
    pokemon.speed.base = base.speed;
    pokemon.specialAttack.base = base.specialAttack;
    pokemon.specialDefense.base = base.specialDefense;

    // TODO: Initialize IVs, EVs, and nature as needed

    return pokemon;
}

#endif