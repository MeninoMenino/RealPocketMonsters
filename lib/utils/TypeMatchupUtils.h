#ifndef TYPEMATCHUPUTILS_H
#define TYPEMATCHUPUTILS_H

#include "../../include/enum/Type.h"

// Retorna o multiplicador de dano de um tipo atacante contra um tipo defensor
static inline int inList(Type t, const Type *list, int n) {
    for (int i = 0; i < n; ++i) if (t == list[i]) return 1;
    return 0;
}

static inline double resolveAttack(Type attacker, Type defender) {
    // Listas estáticas para cada tipo
    static const Type fire_half[]    = {FIRE_TYPE, WATER_TYPE, ROCK_TYPE, DRAGON_TYPE};
    static const Type fire_double[]  = {GRASS_TYPE, ICE_TYPE, BUG_TYPE, STEEL_TYPE};
    static const Type water_half[]   = {WATER_TYPE, GRASS_TYPE, DRAGON_TYPE};
    static const Type water_double[] = {FIRE_TYPE, GROUND_TYPE, ROCK_TYPE};
    static const Type grass_half[]   = {FIRE_TYPE, GRASS_TYPE, POISON_TYPE, FLYING_TYPE, BUG_TYPE, DRAGON_TYPE, STEEL_TYPE};
    static const Type grass_double[] = {WATER_TYPE, GROUND_TYPE, ROCK_TYPE};
    static const Type flying_half[]  = {ELECTRIC_TYPE, ROCK_TYPE, STEEL_TYPE};
    static const Type flying_double[]= {GRASS_TYPE, FIGHTING_TYPE, BUG_TYPE};
    static const Type rock_half[]    = {FIGHTING_TYPE, GROUND_TYPE, STEEL_TYPE};
    static const Type rock_double[]  = {FIRE_TYPE, ICE_TYPE, FLYING_TYPE, BUG_TYPE};
    static const Type ghost_half[]   = {DARK_TYPE};
    static const Type ghost_double[] = {PSYCHIC_TYPE, GHOST_TYPE};
    static const Type ground_half[]  = {BUG_TYPE, GRASS_TYPE};
    static const Type ground_double[]= {FIRE_TYPE, ELECTRIC_TYPE, POISON_TYPE, ROCK_TYPE, STEEL_TYPE};
    static const Type dragon_half[]  = {STEEL_TYPE};
    static const Type dragon_double[]= {DRAGON_TYPE};
    static const Type psychic_half[] = {PSYCHIC_TYPE, STEEL_TYPE};
    static const Type psychic_double[]= {FIGHTING_TYPE, POISON_TYPE};
    static const Type dark_half[]    = {FIGHTING_TYPE, DARK_TYPE};
    static const Type dark_double[]  = {PSYCHIC_TYPE, GHOST_TYPE};
    static const Type ice_half[]     = {FIRE_TYPE, WATER_TYPE, ICE_TYPE, STEEL_TYPE};
    static const Type ice_double[]   = {GRASS_TYPE, GROUND_TYPE, FLYING_TYPE, DRAGON_TYPE};
    static const Type bug_half[]     = {FIRE_TYPE, FIGHTING_TYPE, POISON_TYPE, GHOST_TYPE, STEEL_TYPE};
    static const Type bug_double[]   = {GRASS_TYPE, PSYCHIC_TYPE, DARK_TYPE};
    static const Type steel_half[]   = {FIRE_TYPE, WATER_TYPE, ELECTRIC_TYPE, STEEL_TYPE};
    static const Type steel_double[] = {ICE_TYPE};
    static const Type poison_half[]  = {POISON_TYPE, GROUND_TYPE, ROCK_TYPE, GHOST_TYPE};
    static const Type poison_double[]= {GRASS_TYPE};
    static const Type electric_half[]= {ELECTRIC_TYPE, GRASS_TYPE, DRAGON_TYPE};
    static const Type electric_double[]={WATER_TYPE, FLYING_TYPE};
    static const Type fighting_half[]= {POISON_TYPE, FLYING_TYPE, PSYCHIC_TYPE, BUG_TYPE};
    static const Type fighting_double[]={NORMAL_TYPE, ROCK_TYPE, ICE_TYPE, STEEL_TYPE, DARK_TYPE};
    static const Type normal_half[]  = {ROCK_TYPE, STEEL_TYPE};

    switch (attacker) {
        case FIRE_TYPE:
            if (inList(defender, fire_half, sizeof(fire_half)/sizeof(Type))) return 0.5;
            if (inList(defender, fire_double, sizeof(fire_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case WATER_TYPE:
            if (inList(defender, water_half, sizeof(water_half)/sizeof(Type))) return 0.5;
            if (inList(defender, water_double, sizeof(water_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case GRASS_TYPE:
            if (inList(defender, grass_half, sizeof(grass_half)/sizeof(Type))) return 0.5;
            if (inList(defender, grass_double, sizeof(grass_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case FLYING_TYPE:
            if (inList(defender, flying_half, sizeof(flying_half)/sizeof(Type))) return 0.5;
            if (inList(defender, flying_double, sizeof(flying_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case ROCK_TYPE:
            if (inList(defender, rock_half, sizeof(rock_half)/sizeof(Type))) return 0.5;
            if (inList(defender, rock_double, sizeof(rock_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case GHOST_TYPE:
            if (inList(defender, ghost_half, sizeof(ghost_half)/sizeof(Type))) return 0.5;
            if (inList(defender, ghost_double, sizeof(ghost_double)/sizeof(Type))) return 2.0;
            if (defender == NORMAL_TYPE) return 0.0;
            return 1.0;
        case GROUND_TYPE:
            if (inList(defender, ground_half, sizeof(ground_half)/sizeof(Type))) return 0.5;
            if (inList(defender, ground_double, sizeof(ground_double)/sizeof(Type))) return 2.0;
            if (defender == FLYING_TYPE) return 0.0;
            return 1.0;
        case DRAGON_TYPE:
            if (inList(defender, dragon_half, sizeof(dragon_half)/sizeof(Type))) return 0.5;
            if (inList(defender, dragon_double, sizeof(dragon_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case PSYCHIC_TYPE:
            if (inList(defender, psychic_half, sizeof(psychic_half)/sizeof(Type))) return 0.5;
            if (inList(defender, psychic_double, sizeof(psychic_double)/sizeof(Type))) return 2.0;
            if (defender == DARK_TYPE) return 0.0;
            return 1.0;
        case DARK_TYPE:
            if (inList(defender, dark_half, sizeof(dark_half)/sizeof(Type))) return 0.5;
            if (inList(defender, dark_double, sizeof(dark_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case ICE_TYPE:
            if (inList(defender, ice_half, sizeof(ice_half)/sizeof(Type))) return 0.5;
            if (inList(defender, ice_double, sizeof(ice_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case BUG_TYPE:
            if (inList(defender, bug_half, sizeof(bug_half)/sizeof(Type))) return 0.5;
            if (inList(defender, bug_double, sizeof(bug_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case STEEL_TYPE:
            if (inList(defender, steel_half, sizeof(steel_half)/sizeof(Type))) return 0.5;
            if (inList(defender, steel_double, sizeof(steel_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case POISON_TYPE:
            if (inList(defender, poison_half, sizeof(poison_half)/sizeof(Type))) return 0.5;
            if (inList(defender, poison_double, sizeof(poison_double)/sizeof(Type))) return 2.0;
            if (defender == STEEL_TYPE) return 0.0;
            return 1.0;
        case ELECTRIC_TYPE:
            if (inList(defender, electric_half, sizeof(electric_half)/sizeof(Type))) return 0.5;
            if (inList(defender, electric_double, sizeof(electric_double)/sizeof(Type))) return 2.0;
            if (defender == GROUND_TYPE) return 0.0;
            return 1.0;
        case FIGHTING_TYPE:
            if (inList(defender, fighting_half, sizeof(fighting_half)/sizeof(Type))) return 0.5;
            if (inList(defender, fighting_double, sizeof(fighting_double)/sizeof(Type))) return 2.0;
            return 1.0;
        case NORMAL_TYPE:
            if (inList(defender, normal_half, sizeof(normal_half)/sizeof(Type))) return 0.5;
            if (defender == GHOST_TYPE) return 0.0;
            return 1.0;
        default:
            return 1.0;
    }
}

#endif