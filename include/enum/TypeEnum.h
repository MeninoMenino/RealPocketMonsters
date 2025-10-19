#ifndef TYPE_H
#define TYPE_H

typedef enum {
  NORMAL_TYPE,
  FIRE_TYPE,
  WATER_TYPE,
  ELECTRIC_TYPE,
  GRASS_TYPE,
  ICE_TYPE,
  FIGHTING_TYPE,
  POISON_TYPE,
  GROUND_TYPE,
  FLYING_TYPE,
  PSYCHIC_TYPE,
  BUG_TYPE,
  ROCK_TYPE,
  GHOST_TYPE,
  DRAGON_TYPE,
  DARK_TYPE,
  STEEL_TYPE,

  //unused?

  CURSE_TYPE,
  NONE_TYPE
} Type;

const char* typeToString(Type type) {
  switch (type) {
    case NORMAL_TYPE: return "NORMAL";
    case FIRE_TYPE: return "FIRE";
    case WATER_TYPE: return "WATER";
    case ELECTRIC_TYPE: return "ELECTRIC";
    case GRASS_TYPE: return "GRASS";
    case ICE_TYPE: return "ICE";
    case FIGHTING_TYPE: return "FIGHTING";
    case POISON_TYPE: return "POISON";
    case GROUND_TYPE: return "GROUND";
    case FLYING_TYPE: return "FLYING";
    case PSYCHIC_TYPE: return "PSYCHIC";
    case BUG_TYPE: return "BUG";
    case ROCK_TYPE: return "ROCK";
    case GHOST_TYPE: return "GHOST";
    case DRAGON_TYPE: return "DRAGON";
    case DARK_TYPE: return "DARK";
    case STEEL_TYPE: return "STEEL";

    case CURSE_TYPE: return "CURSE";
    case NONE_TYPE: return "NONE";
    default: return "UNKNOWN";
  }
}

#endif