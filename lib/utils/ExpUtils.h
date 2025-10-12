#ifndef EXPUTILS_H
#define EXPUTILS_H

#include <math.h>
#include "structs/Pokemon.h"

Pokemon calcExp(Pokemon pokemon, Pokemon pk) {
    int calc = floor(pk.baseExp * pk.level / 7); // calc medium fast type
    pokemon.exp = pokemon.exp + calc;
    pokemon = calcEv(pokemon, pk);
    if (pokemon.exp >= pokemon.nextLevelExp) {
        pokemon.level = pokemon.level++;
        pokemon.nextLevelExp = pow(pokemon.level, 3.0);
    }
    return pokemon;
}

Pokemon calcEv(Pokemon pokemon, Pokemon enemyPokemon) {
    int totalEv = calculateTotalEv(pokemon);
    if (totalEv < 510) {
        pokemon.hp.ev = validateEv(enemyPokemon.hp.effort, pokemon.hp.ev);
        pokemon.attack.ev = validateEv(enemyPokemon.attack.effort, pokemon.attack.ev);
        pokemon.defense.ev = validateEv(enemyPokemon.defense.effort, pokemon.defense.ev);
        pokemon.specialAttack.ev = validateEv(enemyPokemon.specialAttack.effort, pokemon.specialAttack.ev);
        pokemon.specialDefense.ev = validateEv(enemyPokemon.specialDefense.effort, pokemon.specialDefense.ev);
        pokemon.speed.ev = validateEv(enemyPokemon.speed.effort, pokemon.speed.ev);
    }
    return pokemon;
}

int validateEv(int effort, int limit) {
    if (limit < 255) {
        limit += effort;
        if (limit > 255) {
            limit = 255;
        }
    }
    return limit;
}

int calculateTotalEv(Pokemon pokemon) {
    return pokemon.hp.ev + pokemon.attack.ev + pokemon.defense.ev
            + pokemon.attack.ev + pokemon.defense.ev + pokemon.speed.ev;
}

#endif