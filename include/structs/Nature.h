#ifndef NATURE_H
#define NATURE_H

#include "enum/StatsEnum.h"

typedef struct {
    const char* name;
    const StatsEnum increase;
    const StatsEnum decrease;
} Nature;

#endif