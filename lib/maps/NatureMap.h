#ifndef NATUREMAP_H
#define NATUREMAP_H

#include "structs/Nature.h"
#include "enum/StatsEnum.h"

Nature natureMap[] = {
    {"HARDY", NONE, NONE},
    {"LONELY", ATK, DEF},
    {"BRAVE", ATK, SPD},
    {"ADAMANT", ATK, SPATK},
    {"NAUGHTY", ATK, SPDEF},
    {"BOLD", DEF, ATK},
    {"DOCILE", NONE, NONE},
    {"RELAXED", DEF, SPD},
    {"IMPISH", DEF, SPATK},
    {"LAX", DEF, SPDEF},
    {"TIMID", SPD, ATK},
    {"HASTY", SPD, DEF},
    {"SERIOUS", NONE, NONE},
    {"JOLLY", SPD, SPATK},
    {"NAIVE", SPD, SPDEF},
    {"MODEST", SPATK, ATK},
    {"MILD", SPATK, DEF},
    {"QUIET", SPATK, SPD},
    {"BASHFUL", NONE, NONE},
    {"RASH", SPATK, SPDEF},
    {"CALM", SPDEF, ATK},
    {"GENTLE", SPDEF, DEF},
    {"SASSY", SPDEF, SPD},
    {"CAREFUL", SPDEF, SPATK},
    {"QUIRKY", NONE, NONE}
};

#endif