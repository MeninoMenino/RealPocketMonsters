#ifndef MOVE_H
#define MOVE_H

#include "enum/Type.h"
#include "enum/MoveEffect.h"

typedef struct {
	//metainfo
    int id;
    int animation;

	//info
	Type type;
	int power;
	int pp;
	double accuracy;
	MoveEffect effect;
	double effectChance;
} Move;


#endif