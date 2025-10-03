#ifndef MOVE_H
#define MOVE_H

#include "enum/Types.h"

typedef struct Move {
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
};


#endif