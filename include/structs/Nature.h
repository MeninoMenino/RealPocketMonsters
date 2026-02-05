#ifndef NATURE_H
#define NATURE_H

#include "enum/StatsEnum.h"

typedef struct {
    const char* name;
    StatsEnum increase;
    StatsEnum decrease;
} Nature;

#endif