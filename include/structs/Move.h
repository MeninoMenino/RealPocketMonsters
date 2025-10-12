#ifndef MOVE_H
#define MOVE_H

#include "enum/Type.h"
#include "enum/MoveEffect.h"
#include "enum/MoveCategory.h"

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