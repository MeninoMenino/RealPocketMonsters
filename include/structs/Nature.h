#ifndef NATURE_H
#define NATURE_H

#include "structs/Stat.h"

typedef struct {
    const char* name;
    const Stat increased_stat;
    const Stat decreased_stat;
} Nature;

#endif