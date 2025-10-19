#ifndef ITEM_H
#define ITEM_H

#include "enum/ItemEffectEnum.h"
#include "enum/StatsEnum.h"
#include "enum/StatusEnum.h"

typedef struct {
    int id;
    const char* name;
    const char* description;
    int price;

    //TODO: enum for effect type
    ItemEffect effect; //heal, boostAtk, boostDef, cureStatus
    int healAmount;
    StatsEnum boostStat; //atk, def, spd, etc.
    int boostAmount;
    StatusEnum cureStatus; //poison, paralysis, etc.
    
} Item;

#endif