#ifndef POKEMONBASE_H
#define POKEMONBASE_H

#include "enum/TypeEnum.h"
#include "structs/Move.h"
#include "structs/Ev.h"

typedef struct {
    //metainfo
    int id;

    //base stats
    int hp;
    int attack;
    int defense;
    int speed;
    int specialAttack;
    int specialDefense;

    //info
    Type type[2];
    int catchRate;
    int baseExp;
    Ev ev[3];

	//db NO_ITEM, NO_ITEM ; items
	//db GENDER_F25 ; gender ratio
	//db 20 ; step cycles to hatch
	//db GROWTH_MEDIUM_SLOW ; growth rate
	//dn EGG_HUMANSHAPE, EGG_HUMANSHAPE ; egg groups

	//; tm/hm learnset
	//tmhm DYNAMICPUNCH, HEADBUTT, CURSE, TOXIC, ZAP_CANNON, PSYCH_UP, HIDDEN_POWER, SUNNY_DAY, SNORE, PROTECT, RAIN_DANCE, ENDURE, FRUSTRATION, RETURN, PSYCHIC_M, SHADOW_BALL, DOUBLE_TEAM, ICE_PUNCH, SWAGGER, SLEEP_TALK, THUNDERPUNCH, DREAM_EATER, REST, ATTRACT, THIEF, FIRE_PUNCH, NIGHTMARE, FLASH
	
} PokemonBase;

#endif