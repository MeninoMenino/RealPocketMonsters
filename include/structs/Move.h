#ifndef MOVE_H
#define MOVE_H

#include "enum/TypeEnum.h"
#include "enum/MoveEffectEnum.h"
#include "enum/MoveCategoryEnum.h"

typedef struct {
	//metainfo
    int id;

	//info
	MoveEffect effect;
	int power;
	Type type;
	double accuracy;
	int pp;
	double effectChance;

	MoveCategory category = PHYSICAL;
} Move;


#endif