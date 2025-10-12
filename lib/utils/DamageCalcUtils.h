#ifndef DAMAGECALCUTILS_H
#define DAMAGECALCUTILS_H

#include "DamageCalcUtils.h"

//Structs
#include <structs/Move.h>
#include <structs/Pokemon.h>

//libs
#include "TypeMatchupUtils.h"
#include <math.h>
#include <stddef.h>

int moveDamage(Pokemon attacker, Pokemon defender, Move move) {
    int damage = 0;

    double modify = damageModify(move.type, defender);
    double stab = calcStab(attacker, move);
    double critical = 1.0;

    if (move.category == PHYSICAL) {
        damage = floor(((((2 * attacker.level / 5 + 2) * attacker.attack.battleStatus(defender.level, false)
                * move.power / defender.defense.battleStatus(defender.level, false)) / 50) + 2) * stab * modify * critical * (80 / 100));
    } else if (move.category == SPECIAL) {
        damage = floor(((((2 * attacker.level / 5 + 2) * attacker.specialAttack.battleStatus(defender.level, false)
                * move.power / defender.specialDefense.battleStatus(defender.level, false)) / 50) + 2) * stab * modify * critical * (80 / 100));
    }

    return damage;
}
    
double damageModify(Type moveType, Pokemon pokemon) {
    double firstTypeModify = resolveAttack(moveType, pokemon.type[0]);
    if(pokemon.type[1] != NULL){
        double secondTypeModify = resolveAttack(moveType, pokemon.type[1]);
        return secondTypeModify * firstTypeModify;
    }

    return firstTypeModify;
}

double calcStab(Pokemon pokemon, Move move){
    if ((pokemon.type[0] == move.type) || (pokemon.type[1] != NULL && pokemon.type[1] == move.type)) {
        return  1.5;
    }
    return 1.0;
}

#endif