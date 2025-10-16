#ifndef POKEMONTEAMUTILS_H
#define POKEMONTEAMUTILS_H

#include "structs/Pokemon.h"

Pokemon pokemonTeam[6];

Pokemon mainPokemon;

void pushPokemonToTeam(Pokemon p) {
    for (int i = 0; i < 6; i++) {
        if (pokemonTeam[i].id == 0) {
        pokemonTeam[i] = p;
        return;
        }
    }
}

#endif