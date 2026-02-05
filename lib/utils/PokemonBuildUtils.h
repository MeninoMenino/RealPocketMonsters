#ifndef POKEMONBUILDUTILS_H
#define POKEMONBUILDUTILS_H

//Structs
#include "structs/Pokemon.h"
#include "structs/PokemonBase.h"

//Maps
#include "PokemonMap.h"

Pokemon pokemon;

// Forward declaration
Pokemon buildNature();

Pokemon buildPokemon(int id, int level) {
    PokemonBase base = pokemonMap[id];
    
    pokemon.id = id;
    pokemon.level = level;
    pokemon.name = "Bulbasaur"; // TODO: Placeholder, should map id to name
    pokemon.type[0] = base.type[0];
    pokemon.type[1] = base.type[1];
    pokemon.baseExp = base.baseExp;

    pokemon.exp = 0; // TODO: Placeholder, calculate!
    pokemon.nextLevelExp = 100; // TODO: Placeholder, calculate!
    
    //Base stats
    pokemon.hp.base = base.hp;
    pokemon.attack.base = base.attack;
    pokemon.defense.base = base.defense;
    pokemon.speed.base = base.speed;
    pokemon.specialAttack.base = base.specialAttack;
    pokemon.specialDefense.base = base.specialDefense;

    buildNature();

    // TODO: Initialize IVs, EVs, and calculate final stats

    return pokemon;
}

Pokemon buildNature() {
    switch (pokemon.nature.increase) {
        case ATK:
            pokemon.attack.nature = 2;
            break;
        case DEF:
            pokemon.defense.nature = 2;
            break;
        case SPD:
            pokemon.speed.nature = 2;
            break;
        case SPATK:
            pokemon.specialAttack.nature = 2;
            break;
        case SPDEF:
            pokemon.specialDefense.nature = 2;
            break;
        case NONE:
        default:
            break;
    }

    switch (pokemon.nature.decrease) {
        case ATK:
            pokemon.attack.nature = -2;
            break;
        case DEF:
            pokemon.defense.nature = -2;
            break;
        case SPD:
            pokemon.speed.nature = -2;
            break;
        case SPATK:
            pokemon.specialAttack.nature = -2;
            break;
        case SPDEF:
            pokemon.specialDefense.nature = -2;
            break;
        case NONE:
        default:
            break;
    }

    return pokemon;
}

#endif