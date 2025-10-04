#ifndef MOVE_H
#define MOVE_H

#include "enum/Type.h"

typedef struct {
	//metainfo
    int id;
    int animation;

	//info
    int effect;
	int power;
	Type type;
	double accuracy;
	int pp;
	double effectChance;
} Move;


#endif