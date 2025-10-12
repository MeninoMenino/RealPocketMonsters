#ifndef POKEMON_H
#define POKEMON_H

#include "enum/Type.h"
#include "structs/Stat.h"

typedef struct {
    //metainfo
    int id;
    
    //info
    char* name;
    Type type[2];

    //level info
    int baseExp;
    int exp;
    int nextLevelExp;
    int level;
    
    //stats
    Stat hp;
    Stat attack;
    Stat defense;
    Stat speed;
    Stat specialAttack;
    Stat specialDefense;

	//db NO_ITEM, NO_ITEM ; items
	//db GENDER_F25 ; gender ratio
	//db 20 ; step cycles to hatch
	//db GROWTH_MEDIUM_SLOW ; growth rate
	//dn EGG_HUMANSHAPE, EGG_HUMANSHAPE ; egg groups

	//; tm/hm learnset
	//tmhm DYNAMICPUNCH, HEADBUTT, CURSE, TOXIC, ZAP_CANNON, PSYCH_UP, HIDDEN_POWER, SUNNY_DAY, SNORE, PROTECT, RAIN_DANCE, ENDURE, FRUSTRATION, RETURN, PSYCHIC_M, SHADOW_BALL, DOUBLE_TEAM, ICE_PUNCH, SWAGGER, SLEEP_TALK, THUNDERPUNCH, DREAM_EATER, REST, ATTRACT, THIEF, FIRE_PUNCH, NIGHTMARE, FLASH
	
} Pokemon;

#endif