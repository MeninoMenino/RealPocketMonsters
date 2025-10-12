#ifndef STAT_H
#define STAT_H

typedef struct {
    int baseStat;
    int iv;
    int ev;
    int nature;
    int effort;

    int battleStatus(int level, bool isHp) {
        int isHpValue = isHp ? 10 : 5;
        return ((2 * baseStat + iv + (effort / 4)) * level / 100) + isHpValue + nature;
    }
} Stat;

#endif