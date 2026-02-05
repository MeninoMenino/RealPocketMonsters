#ifndef POKEMONTEAMUTILS_H
#define POKEMONTEAMUTILS_H

#include "structs/Pokemon.h"
#include <vector>

std::vector<Pokemon> team;

bool pushPokemonToTeam(Pokemon p) {
    if(team.size() >= 6) {
        return false;
    }
    
    team.push_back(p);

    return true;
}

bool removePokemonFromTeam(Pokemon p) {
    for(size_t i = 0; i < team.size(); i++) {
        if(team[i].id == p.id) {
            team.erase(team.begin() + i);
            return true;
        }
    }
    return false;
}

#endif