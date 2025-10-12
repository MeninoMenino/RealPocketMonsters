#ifndef POKEMONMAP_H
#define POKEMONMAP_H

#include "enum/EvEnum.h"

#include "structs/PokemonBase.h"
#include "enum/Type.h"

PokemonBase map[] = {
    {1, 45, 49, 49, 45, 65, 65, {GRASS_TYPE, POISON_TYPE}, 45, 64, {{1, EV_SPECIAL_ATTACK}}}, // bulbasaur
    {2, 60, 62, 63, 60, 80, 80, {GRASS_TYPE, POISON_TYPE}, 45, 141, {{1, EV_SPECIAL_ATTACK}, {1, EV_SPECIAL_DEFENSE}}}, // ivysaur
    {3, 80, 82, 83, 80, 100, 100, {GRASS_TYPE, POISON_TYPE}, 45, 208, {{2, EV_SPECIAL_ATTACK}, {1, EV_SPECIAL_DEFENSE}}}, // venusaur
    {4, 39, 52, 43, 65, 60, 50, {FIRE_TYPE, FIRE_TYPE}, 45, 65, {{1, EV_SPEED}}}, // charmander
    {5, 58, 64, 58, 80, 80, 65, {FIRE_TYPE, FIRE_TYPE}, 45, 142, {{1, EV_SPECIAL_ATTACK}, {1, EV_SPEED}}}, // charmeleon
    {6, 78, 84, 78, 100, 109, 85, {FIRE_TYPE, FLYING_TYPE}, 45, 209, {{3, EV_SPECIAL_ATTACK}}}, // charizard
    {7, 44, 48, 65, 43, 50, 64, {WATER_TYPE, WATER_TYPE}, 45, 66, {{1, EV_DEFENSE}}}, // squirtle
    {8, 59, 63, 80, 58, 65, 80, {WATER_TYPE, WATER_TYPE}, 45, 143, {{1, EV_DEFENSE}, {1, EV_SPECIAL_DEFENSE}}}, // wartortle
    {9, 79, 83, 100, 78, 85, 105, {WATER_TYPE, WATER_TYPE}, 45, 210, {{3, EV_SPECIAL_DEFENSE}}}, // blastoise
    {10, 45, 30, 35, 45, 20, 20, {BUG_TYPE, BUG_TYPE}, 255, 53, {{1, EV_HP}}}, // caterpie
    {11, 50, 20, 55, 30, 25, 25, {BUG_TYPE, BUG_TYPE}, 120, 72, {{2, EV_DEFENSE}}}, // metapod
    {12, 60, 45, 50, 70, 80, 80, {BUG_TYPE, FLYING_TYPE}, 45, 160, {{2, EV_SPECIAL_ATTACK}, {1, EV_SPECIAL_DEFENSE}}}, // butterfree
    {13, 40, 35, 30, 50, 20, 20, {BUG_TYPE, POISON_TYPE}, 255, 52, {{1, EV_SPEED}}}, // weedle
    {14, 45, 25, 50, 35, 25, 25, {BUG_TYPE, POISON_TYPE}, 120, 71, {{2, EV_DEFENSE}}}, // kakuna
    {15, 65, 80, 40, 75, 45, 80, {BUG_TYPE, POISON_TYPE}, 45, 159, {{2, EV_ATTACK}, {1, EV_SPEED}}}, // beedrill
    {16, 40, 45, 40, 56, 35, 35, {NORMAL_TYPE, FLYING_TYPE}, 255, 55, {{1, EV_SPEED}}}, // pidgey
    {17, 63, 60, 55, 71, 50, 50, {NORMAL_TYPE, FLYING_TYPE}, 120, 113, {{2, EV_SPEED}}}, // pidgeotto
    {18, 83, 80, 75, 91, 70, 70, {NORMAL_TYPE, FLYING_TYPE}, 45, 172, {{3, EV_SPEED}}}, // pidgeot
    {19, 30, 56, 35, 72, 25, 35, {NORMAL_TYPE, NORMAL_TYPE}, 255, 57, {{1, EV_SPEED}}}, // rattata
    {20, 55, 81, 60, 97, 50, 70, {NORMAL_TYPE, NORMAL_TYPE}, 90, 116, {{2, EV_SPEED}}}, // raticate
    {21, 40, 60, 30, 70, 31, 31, {NORMAL_TYPE, FLYING_TYPE}, 255, 58, {{1, EV_SPEED}}}, // spearow
    {22, 65, 90, 65, 100, 61, 61, {NORMAL_TYPE, FLYING_TYPE}, 90, 162, {{2, EV_SPEED}}}, // fearow
    {23, 35, 60, 44, 55, 40, 54, {POISON_TYPE, POISON_TYPE}, 255, 62, {{1, EV_ATTACK}}}, // ekans
    {24, 60, 85, 69, 80, 65, 79, {POISON_TYPE, POISON_TYPE}, 90, 147, {{2, EV_ATTACK}}}, // arbok
    {25, 35, 55, 30, 90, 50, 40, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 190, 82, {{2, EV_SPEED}}}, // pikachu
    {26, 60, 90, 55, 100, 90, 80, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 75, 122, {{3, EV_SPEED}}}, // raichu
    {27, 50, 75, 85, 40, 20, 30, {GROUND_TYPE, GROUND_TYPE}, 255, 93, {{1, EV_DEFENSE}}}, // sandshrew
    {28, 75, 100, 110, 65, 45, 55, {GROUND_TYPE, GROUND_TYPE}, 90, 163, {{2, EV_DEFENSE}}}, // sandslash
    {29, 55, 47, 52, 41, 40, 40, {POISON_TYPE, POISON_TYPE}, 235, 59, {{1, EV_HP}}}, // nidoran_f
    {30, 70, 62, 67, 56, 55, 55, {POISON_TYPE, POISON_TYPE}, 120, 117, {{2, EV_HP}}}, // nidorina
    {31, 90, 82, 87, 76, 75, 85, {POISON_TYPE, GROUND_TYPE}, 45, 194, {{3, EV_HP}}}, // nidoqueen
    {32, 46, 57, 40, 50, 40, 40, {POISON_TYPE, POISON_TYPE}, 235, 60, {{1, EV_ATTACK}}}, // nidoran_m
    {33, 61, 72, 57, 65, 55, 55, {POISON_TYPE, POISON_TYPE}, 120, 118, {{2, EV_ATTACK}}}, // nidorino
    {34, 81, 92, 77, 85, 85, 75, {POISON_TYPE, GROUND_TYPE}, 45, 195, {{3, EV_ATTACK}}}, // nidoking
    {35, 70, 45, 48, 35, 60, 65, {NORMAL_TYPE, NORMAL_TYPE}, 150, 68, {{2, EV_HP}}}, // clefairy
    {36, 95, 70, 73, 60, 85, 90, {NORMAL_TYPE, NORMAL_TYPE}, 25, 129, {{3, EV_HP}}}, // clefable
    {37, 38, 41, 40, 65, 50, 65, {FIRE_TYPE, FIRE_TYPE}, 190, 63, {{1, EV_SPEED}}}, // vulpix
    {38, 73, 76, 75, 100, 81, 100, {FIRE_TYPE, FIRE_TYPE}, 75, 178, {{1, EV_SPECIAL_DEFENSE}, {1, EV_SPEED}}}, // ninetales
    {39, 115, 45, 20, 20, 45, 25, {NORMAL_TYPE, NORMAL_TYPE}, 170, 76, {{2, EV_HP}}}, // jigglypuff
    {40, 140, 70, 45, 45, 75, 50, {NORMAL_TYPE, NORMAL_TYPE}, 50, 109, {{3, EV_HP}}}, // wigglytuff
    {41, 40, 45, 35, 55, 30, 40, {POISON_TYPE, FLYING_TYPE}, 255, 54, {{1, EV_SPEED}}}, // zubat
    {42, 75, 80, 70, 90, 65, 75, {POISON_TYPE, FLYING_TYPE}, 90, 171, {{2, EV_SPEED}}}, // golbat
    {43, 45, 50, 55, 30, 75, 65, {GRASS_TYPE, POISON_TYPE}, 255, 78, {{1, EV_SPECIAL_ATTACK}}}, // oddish
    {44, 60, 65, 70, 40, 85, 75, {GRASS_TYPE, POISON_TYPE}, 120, 132, {{2, EV_SPECIAL_ATTACK}}}, // gloom
    {45, 75, 80, 85, 50, 100, 90, {GRASS_TYPE, POISON_TYPE}, 45, 184, {{3, EV_SPECIAL_ATTACK}}}, // vileplume
    {46, 35, 70, 55, 25, 45, 55, {BUG_TYPE, GRASS_TYPE}, 190, 70, {{1, EV_ATTACK}}}, // paras
    {47, 60, 95, 80, 30, 60, 80, {BUG_TYPE, GRASS_TYPE}, 75, 128, {{2, EV_ATTACK}, {1, EV_DEFENSE}}}, // parasect
    {48, 60, 55, 50, 45, 40, 55, {BUG_TYPE, POISON_TYPE}, 190, 75, {{1, EV_SPECIAL_DEFENSE}}}, // venonat
    {49, 70, 65, 60, 90, 90, 75, {BUG_TYPE, POISON_TYPE}, 75, 138, {{1, EV_SPECIAL_ATTACK}, {1, EV_SPEED}}}, // venomoth
    {50, 10, 55, 25, 95, 35, 45, {GROUND_TYPE, GROUND_TYPE}, 255, 81, {{1, EV_SPEED}}}, // diglett
    {51, 35, 80, 50, 120, 50, 70, {GROUND_TYPE, GROUND_TYPE}, 50, 153, {{2, EV_SPEED}}}, // dugtrio
    {52, 40, 45, 35, 90, 40, 40, {NORMAL_TYPE, NORMAL_TYPE}, 255, 69, {{1, EV_SPEED}}}, // meowth
    {53, 65, 70, 60, 115, 65, 65, {NORMAL_TYPE, NORMAL_TYPE}, 90, 148, {{2, EV_SPEED}}}, // persian
    {54, 50, 52, 48, 55, 65, 50, {WATER_TYPE, WATER_TYPE}, 190, 80, {{1, EV_SPECIAL_ATTACK}}}, // psyduck
    {55, 80, 82, 78, 85, 95, 80, {WATER_TYPE, WATER_TYPE}, 75, 174, {{2, EV_SPECIAL_ATTACK}}}, // golduck
    {56, 40, 80, 35, 70, 35, 45, {FIGHTING_TYPE, FIGHTING_TYPE}, 190, 74, {{1, EV_ATTACK}}}, // mankey
    {57, 65, 105, 60, 95, 60, 70, {FIGHTING_TYPE, FIGHTING_TYPE}, 75, 149, {{2, EV_ATTACK}}}, // primeape
    {58, 55, 70, 45, 60, 70, 50, {FIRE_TYPE, FIRE_TYPE}, 190, 91, {{1, EV_ATTACK}}}, // growlithe
    {59, 90, 110, 80, 95, 100, 80, {FIRE_TYPE, FIRE_TYPE}, 75, 213, {{2, EV_ATTACK}}}, // arcanine
    {60, 40, 50, 40, 90, 40, 40, {WATER_TYPE, WATER_TYPE}, 255, 77, {{1, EV_SPEED}}}, // poliwag
    {61, 65, 65, 65, 90, 50, 50, {WATER_TYPE, WATER_TYPE}, 120, 131, {{2, EV_SPEED}}}, // poliwhirl
    {62, 90, 85, 95, 70, 70, 90, {WATER_TYPE, FIGHTING_TYPE}, 45, 185, {{3, EV_DEFENSE}}}, // poliwrath
    {63, 25, 20, 15, 90, 105, 55, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 200, 73, {{1, EV_SPECIAL_ATTACK}}}, // abra
    {64, 40, 35, 30, 105, 120, 70, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 100, 145, {{2, EV_SPECIAL_ATTACK}}}, // kadabra
    {65, 55, 50, 45, 120, 135, 85, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 50, 186, {{3, EV_SPECIAL_ATTACK}}}, // alakazam
    {66, 70, 80, 50, 35, 35, 35, {FIGHTING_TYPE, FIGHTING_TYPE}, 180, 88, {{1, EV_ATTACK}}}, // machop
    {67, 80, 100, 70, 45, 50, 60, {FIGHTING_TYPE, FIGHTING_TYPE}, 90, 146, {{2, EV_ATTACK}}}, // machoke
    {68, 90, 130, 80, 55, 65, 85, {FIGHTING_TYPE, FIGHTING_TYPE}, 45, 193, {{3, EV_ATTACK}}}, // machamp
    {69, 50, 75, 35, 40, 70, 30, {GRASS_TYPE, POISON_TYPE}, 255, 84, {{1, EV_ATTACK}}}, // bellsprout
    {70, 65, 90, 50, 55, 85, 45, {GRASS_TYPE, POISON_TYPE}, 120, 151, {{2, EV_ATTACK}}}, // weepinbell
    {71, 80, 105, 65, 70, 100, 60, {GRASS_TYPE, POISON_TYPE}, 45, 191, {{3, EV_ATTACK}}}, // victreebel
    {72, 40, 40, 35, 70, 50, 100, {WATER_TYPE, POISON_TYPE}, 190, 105, {{1, EV_SPECIAL_DEFENSE}}}, // tentacool
    {73, 80, 70, 65, 100, 80, 120, {WATER_TYPE, POISON_TYPE}, 60, 205, {{2, EV_SPECIAL_DEFENSE}}}, // tentacruel
    {74, 40, 80, 100, 20, 30, 30, {ROCK_TYPE, GROUND_TYPE}, 255, 86, {{1, EV_DEFENSE}}}, // geodude
    {75, 55, 95, 115, 35, 45, 45, {ROCK_TYPE, GROUND_TYPE}, 120, 134, {{2, EV_DEFENSE}}}, // graveler
    {76, 80, 110, 130, 45, 55, 65, {ROCK_TYPE, GROUND_TYPE}, 45, 177, {{3, EV_DEFENSE}}}, // golem
    {77, 50, 85, 55, 90, 65, 65, {FIRE_TYPE, FIRE_TYPE}, 190, 152, {{1, EV_SPEED}}}, // ponyta
    {78, 65, 100, 70, 105, 80, 80, {FIRE_TYPE, FIRE_TYPE}, 60, 192, {{2, EV_SPEED}}}, // rapidash
    {79, 90, 65, 65, 15, 40, 40, {WATER_TYPE, PSYCHIC_TYPE}, 190, 99, {{1, EV_HP}}}, // slowpoke
    {80, 95, 75, 110, 30, 100, 80, {WATER_TYPE, PSYCHIC_TYPE}, 75, 164, {{2, EV_DEFENSE}}}, // slowbro
    {81, 25, 35, 70, 45, 95, 55, {ELECTRIC_TYPE, STEEL_TYPE}, 190, 89, {{1, EV_SPECIAL_ATTACK}}}, // magnemite
    {82, 50, 60, 95, 70, 120, 70, {ELECTRIC_TYPE, STEEL_TYPE}, 60, 161, {{2, EV_SPECIAL_ATTACK}}}, // magneton
    {83, 52, 65, 55, 60, 58, 62, {NORMAL_TYPE, FLYING_TYPE}, 45, 94, {{1, EV_ATTACK}}}, // farfetch_d
    {84, 35, 85, 45, 75, 35, 35, {NORMAL_TYPE, FLYING_TYPE}, 190, 96, {{1, EV_ATTACK}}}, // doduo
    {85, 60, 110, 70, 100, 60, 60, {NORMAL_TYPE, FLYING_TYPE}, 45, 158, {{2, EV_ATTACK}}}, // dodrio
    {86, 65, 45, 55, 45, 45, 70, {WATER_TYPE, WATER_TYPE}, 190, 100, {{1, EV_SPECIAL_DEFENSE}}}, // seel
    {87, 90, 70, 80, 70, 70, 95, {WATER_TYPE, ICE_TYPE}, 75, 176, {{2, EV_SPECIAL_DEFENSE}}}, // dewgong
    {88, 80, 80, 50, 25, 40, 50, {POISON_TYPE, POISON_TYPE}, 190, 90, {{1, EV_HP}}}, // grimer
    {89, 105, 105, 75, 50, 65, 100, {POISON_TYPE, POISON_TYPE}, 75, 157, {{1, EV_HP}, {1, EV_ATTACK}}}, // muk
    {90, 30, 65, 100, 40, 45, 25, {WATER_TYPE, WATER_TYPE}, 190, 97, {{1, EV_DEFENSE}}}, // shellder
    {91, 50, 95, 180, 70, 85, 45, {WATER_TYPE, ICE_TYPE}, 60, 203, {{2, EV_DEFENSE}}}, // cloyster
    {92, 30, 35, 30, 80, 100, 35, {GHOST_TYPE, POISON_TYPE}, 190, 95, {{1, EV_SPECIAL_ATTACK}}}, // gastly
    {93, 45, 50, 45, 95, 115, 55, {GHOST_TYPE, POISON_TYPE}, 90, 126, {{2, EV_SPECIAL_ATTACK}}}, // haunter
    {94, 60, 65, 60, 110, 130, 75, {GHOST_TYPE, POISON_TYPE}, 45, 190, {{3, EV_SPECIAL_ATTACK}}}, // gengar
    {95, 35, 45, 160, 70, 30, 45, {ROCK_TYPE, GROUND_TYPE}, 45, 108, {{1, EV_DEFENSE}}}, // onix
    {96, 60, 48, 45, 42, 43, 90, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 190, 102, {{1, EV_SPECIAL_DEFENSE}}}, // drowzee
    {97, 85, 73, 70, 67, 73, 115, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 75, 165, {{2, EV_SPECIAL_DEFENSE}}}, // hypno
    {98, 30, 105, 90, 50, 25, 25, {WATER_TYPE, WATER_TYPE}, 225, 115, {{1, EV_ATTACK}}}, // krabby
    {99, 55, 130, 115, 75, 50, 50, {WATER_TYPE, WATER_TYPE}, 60, 206, {{2, EV_ATTACK}}}, // kingler
    {100, 40, 30, 50, 100, 55, 55, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 190, 103, {{1, EV_SPEED}}}, // voltorb
    {101, 60, 50, 70, 140, 80, 80, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 60, 150, {{2, EV_SPEED}}}, // electrode
    {102, 60, 40, 80, 40, 60, 45, {GRASS_TYPE, PSYCHIC_TYPE}, 90, 98, {{1, EV_DEFENSE}}}, // exeggcute
    {103, 95, 95, 85, 55, 125, 65, {GRASS_TYPE, PSYCHIC_TYPE}, 45, 212, {{2, EV_SPECIAL_ATTACK}}}, // exeggutor
    {104, 50, 50, 95, 35, 40, 50, {GROUND_TYPE, GROUND_TYPE}, 190, 87, {{1, EV_DEFENSE}}}, // cubone
    {105, 60, 80, 110, 45, 50, 80, {GROUND_TYPE, GROUND_TYPE}, 75, 124, {{2, EV_DEFENSE}}}, // marowak
    {106, 50, 120, 53, 87, 35, 110, {FIGHTING_TYPE, FIGHTING_TYPE}, 45, 139, {{2, EV_ATTACK}}}, // hitmonlee
    {107, 50, 105, 79, 76, 35, 110, {FIGHTING_TYPE, FIGHTING_TYPE}, 45, 140, {{2, EV_SPECIAL_DEFENSE}}}, // hitmonchan
    {108, 90, 55, 75, 30, 60, 75, {NORMAL_TYPE, NORMAL_TYPE}, 45, 127, {{2, EV_HP}}}, // lickitung
    {109, 40, 65, 95, 35, 60, 45, {POISON_TYPE, POISON_TYPE}, 190, 114, {{1, EV_DEFENSE}}}, // koffing
    {110, 65, 90, 120, 60, 85, 70, {POISON_TYPE, POISON_TYPE}, 60, 173, {{2, EV_DEFENSE}}}, // weezing
    {111, 80, 85, 95, 25, 30, 30, {GROUND_TYPE, ROCK_TYPE}, 120, 135, {{1, EV_DEFENSE}}}, // rhyhorn
    {112, 105, 130, 120, 40, 45, 45, {GROUND_TYPE, ROCK_TYPE}, 60, 204, {{2, EV_ATTACK}}}, // rhydon
    {113, 250, 5, 5, 50, 35, 105, {NORMAL_TYPE, NORMAL_TYPE}, 30, 255, {{2, EV_HP}}}, // chansey
    {114, 65, 55, 115, 60, 100, 40, {GRASS_TYPE, GRASS_TYPE}, 45, 166, {{1, EV_DEFENSE}}}, // tangela
    {115, 105, 95, 80, 90, 40, 80, {NORMAL_TYPE, NORMAL_TYPE}, 45, 175, {{2, EV_HP}}}, // kangaskhan
    {116, 30, 40, 70, 60, 70, 25, {WATER_TYPE, WATER_TYPE}, 225, 83, {{1, EV_SPECIAL_ATTACK}}}, // horsea
    {117, 55, 65, 95, 85, 95, 45, {WATER_TYPE, WATER_TYPE}, 75, 155, {{1, EV_DEFENSE}, {1, EV_SPECIAL_ATTACK}}}, // seadra
    {118, 45, 67, 60, 63, 35, 50, {WATER_TYPE, WATER_TYPE}, 225, 111, {{1, EV_ATTACK}}}, // goldeen
    {119, 80, 92, 65, 68, 65, 80, {WATER_TYPE, WATER_TYPE}, 60, 170, {{2, EV_ATTACK}}}, // seaking
    {120, 30, 45, 55, 85, 70, 55, {WATER_TYPE, WATER_TYPE}, 225, 106, {{1, EV_SPEED}}}, // staryu
    {121, 60, 75, 85, 115, 100, 85, {WATER_TYPE, PSYCHIC_TYPE}, 60, 207, {{2, EV_SPEED}}}, // starmie
    {122, 40, 45, 65, 90, 100, 120, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 45, 136, {{2, EV_SPECIAL_DEFENSE}}}, // mr__mime
    {123, 70, 110, 80, 105, 55, 80, {BUG_TYPE, FLYING_TYPE}, 45, 187, {{1, EV_ATTACK}}}, // scyther
    {124, 65, 50, 35, 95, 115, 95, {ICE_TYPE, PSYCHIC_TYPE}, 45, 137, {{2, EV_SPECIAL_ATTACK}}}, // jynx
    {125, 65, 83, 57, 105, 95, 85, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 45, 156, {{2, EV_SPEED}}}, // electabuzz
    {126, 65, 95, 57, 93, 100, 85, {FIRE_TYPE, FIRE_TYPE}, 45, 167, {{2, EV_SPECIAL_ATTACK}}}, // magmar
    {127, 65, 125, 100, 85, 55, 70, {BUG_TYPE, BUG_TYPE}, 45, 200, {{2, EV_ATTACK}}}, // pinsir
    {128, 75, 100, 95, 110, 40, 70, {NORMAL_TYPE, NORMAL_TYPE}, 45, 211, {{1, EV_ATTACK}, {1, EV_SPEED}}}, // tauros
    {129, 20, 10, 55, 80, 15, 20, {WATER_TYPE, WATER_TYPE}, 255, 20, {{1, EV_SPEED}}}, // magikarp
    {130, 95, 125, 79, 81, 60, 100, {WATER_TYPE, FLYING_TYPE}, 45, 214, {{2, EV_ATTACK}}}, // gyarados
    {131, 130, 85, 80, 60, 85, 95, {WATER_TYPE, ICE_TYPE}, 45, 219, {{2, EV_HP}}}, // lapras
    {132, 48, 48, 48, 48, 48, 48, {NORMAL_TYPE, NORMAL_TYPE}, 35, 61, {{1, EV_HP}}}, // ditto
    {133, 55, 55, 50, 55, 45, 65, {NORMAL_TYPE, NORMAL_TYPE}, 45, 92, {{1, EV_SPECIAL_DEFENSE}}}, // eevee
    {134, 130, 65, 60, 65, 110, 95, {WATER_TYPE, WATER_TYPE}, 45, 196, {{2, EV_HP}}}, // vaporeon
    {135, 65, 65, 60, 130, 110, 95, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 45, 197, {{2, EV_SPEED}}}, // jolteon
    {136, 65, 130, 60, 65, 95, 110, {FIRE_TYPE, FIRE_TYPE}, 45, 198, {{2, EV_ATTACK}}}, // flareon
    {137, 65, 60, 70, 40, 85, 75, {NORMAL_TYPE, NORMAL_TYPE}, 45, 130, {{1, EV_SPECIAL_ATTACK}}}, // porygon
    {138, 35, 40, 100, 35, 90, 55, {ROCK_TYPE, WATER_TYPE}, 45, 120, {{1, EV_DEFENSE}}}, // omanyte
    {139, 70, 60, 125, 55, 115, 70, {ROCK_TYPE, WATER_TYPE}, 45, 199, {{2, EV_DEFENSE}}}, // omastar
    {140, 30, 80, 90, 55, 55, 45, {ROCK_TYPE, WATER_TYPE}, 45, 119, {{1, EV_DEFENSE}}}, // kabuto
    {141, 60, 115, 105, 80, 65, 70, {ROCK_TYPE, WATER_TYPE}, 45, 201, {{2, EV_ATTACK}}}, // kabutops
    {142, 80, 105, 65, 130, 60, 75, {ROCK_TYPE, FLYING_TYPE}, 45, 202, {{2, EV_SPEED}}}, // aerodactyl
    {143, 160, 110, 65, 30, 65, 110, {NORMAL_TYPE, NORMAL_TYPE}, 25, 154, {{2, EV_HP}}}, // snorlax
    {144, 90, 85, 100, 85, 95, 125, {ICE_TYPE, FLYING_TYPE}, 3, 215, {{3, EV_SPECIAL_DEFENSE}}}, // articuno
    {145, 90, 90, 85, 100, 125, 90, {ELECTRIC_TYPE, FLYING_TYPE}, 3, 216, {{3, EV_SPECIAL_ATTACK}}}, // zapdos
    {146, 90, 100, 90, 90, 125, 85, {FIRE_TYPE, FLYING_TYPE}, 3, 217, {{3, EV_SPECIAL_ATTACK}}}, // moltres
    {147, 41, 64, 45, 50, 50, 50, {DRAGON_TYPE, DRAGON_TYPE}, 45, 67, {{1, EV_ATTACK}}}, // dratini
    {148, 61, 84, 65, 70, 70, 70, {DRAGON_TYPE, DRAGON_TYPE}, 45, 144, {{2, EV_ATTACK}}}, // dragonair
    {149, 91, 134, 95, 80, 100, 100, {DRAGON_TYPE, FLYING_TYPE}, 45, 218, {{3, EV_ATTACK}}}, // dragonite
    {150, 106, 110, 90, 130, 154, 90, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 3, 220, {{3, EV_SPECIAL_ATTACK}}}, // mewtwo
    {151, 100, 100, 100, 100, 100, 100, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 45, 64, {{3, EV_HP}}}, // mew
    {152, 45, 49, 65, 45, 49, 65, {GRASS_TYPE, GRASS_TYPE}, 45, 64, {{1, EV_SPECIAL_DEFENSE}}}, // chikorita
    {153, 60, 62, 80, 60, 63, 80, {GRASS_TYPE, GRASS_TYPE}, 45, 141, {{1, EV_DEFENSE}, {1, EV_SPECIAL_DEFENSE}}}, // bayleef
    {154, 80, 82, 100, 80, 83, 100, {GRASS_TYPE, GRASS_TYPE}, 45, 208, {{1, EV_DEFENSE}, {2, EV_SPECIAL_DEFENSE}}}, // meganium
    {155, 39, 52, 43, 65, 60, 50, {FIRE_TYPE, FIRE_TYPE}, 45, 65, {{1, EV_SPEED}}}, // cyndaquil
    {156, 58, 64, 58, 80, 80, 65, {FIRE_TYPE, FIRE_TYPE}, 45, 142, {{1, EV_SPECIAL_ATTACK}, {1, EV_SPEED}}}, // quilava
    {157, 78, 84, 78, 100, 109, 85, {FIRE_TYPE, FIRE_TYPE}, 45, 209, {{3, EV_SPECIAL_ATTACK}}}, // typhlosion
    {158, 50, 65, 64, 43, 44, 48, {WATER_TYPE, WATER_TYPE}, 45, 66, {{1, EV_ATTACK}}}, // totodile
    {159, 65, 80, 80, 58, 59, 63, {WATER_TYPE, WATER_TYPE}, 45, 143, {{1, EV_ATTACK}, {1, EV_DEFENSE}}}, // croconaw
    {160, 85, 105, 100, 78, 79, 83, {WATER_TYPE, WATER_TYPE}, 45, 210, {{2, EV_ATTACK}, {1, EV_DEFENSE}}}, // feraligatr
    {161, 35, 46, 34, 20, 35, 45, {NORMAL_TYPE, NORMAL_TYPE}, 255, 57, {{1, EV_ATTACK}}}, // sentret
    {162, 85, 76, 64, 90, 45, 55, {NORMAL_TYPE, NORMAL_TYPE}, 90, 116, {{2, EV_SPEED}}}, // furret
    {163, 60, 30, 30, 50, 36, 56, {NORMAL_TYPE, FLYING_TYPE}, 255, 58, {{1, EV_HP}}}, // hoothoot
    {164, 100, 50, 50, 70, 76, 96, {NORMAL_TYPE, FLYING_TYPE}, 90, 162, {{2, EV_HP}}}, // noctowl
    {165, 40, 20, 30, 55, 40, 80, {BUG_TYPE, FLYING_TYPE}, 255, 54, {{1, EV_SPECIAL_DEFENSE}}}, // ledyba
    {166, 55, 35, 50, 85, 55, 110, {BUG_TYPE, FLYING_TYPE}, 90, 134, {{2, EV_SPECIAL_DEFENSE}}}, // ledian
    {167, 40, 60, 40, 30, 40, 40, {BUG_TYPE, POISON_TYPE}, 255, 54, {{1, EV_ATTACK}}}, // spinarak
    {168, 70, 90, 70, 40, 60, 60, {BUG_TYPE, POISON_TYPE}, 90, 134, {{2, EV_ATTACK}}}, // ariados
    {169, 85, 90, 80, 130, 70, 80, {POISON_TYPE, FLYING_TYPE}, 90, 204, {{3, EV_SPEED}}}, // crobat
    {170, 75, 38, 38, 67, 56, 56, {WATER_TYPE, ELECTRIC_TYPE}, 190, 90, {{1, EV_HP}}}, // chinchou
    {171, 125, 58, 58, 67, 76, 76, {WATER_TYPE, ELECTRIC_TYPE}, 75, 156, {{2, EV_HP}}}, // lanturn
    {172, 20, 40, 15, 60, 35, 35, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 190, 42, {{1, EV_SPEED}}}, // pichu
    {173, 50, 25, 28, 15, 45, 55, {NORMAL_TYPE, NORMAL_TYPE}, 150, 37, {{1, EV_SPECIAL_DEFENSE}}}, // cleffa
    {174, 90, 30, 15, 15, 40, 20, {NORMAL_TYPE, NORMAL_TYPE}, 170, 39, {{1, EV_HP}}}, // igglybuff
    {175, 35, 20, 65, 20, 40, 65, {NORMAL_TYPE, NORMAL_TYPE}, 190, 74, {{1, EV_SPECIAL_DEFENSE}}}, // togepi
    {176, 55, 40, 85, 40, 80, 105, {NORMAL_TYPE, FLYING_TYPE}, 75, 114, {{2, EV_SPECIAL_DEFENSE}}}, // togetic
    {177, 40, 50, 45, 70, 70, 45, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 190, 73, {{1, EV_SPECIAL_ATTACK}}}, // natu
    {178, 65, 75, 70, 95, 95, 70, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 75, 171, {{1, EV_SPECIAL_ATTACK}, {1, EV_SPEED}}}, // xatu
    {179, 55, 40, 40, 35, 65, 45, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 235, 59, {{1, EV_SPECIAL_ATTACK}}}, // mareep
    {180, 70, 55, 55, 45, 80, 60, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 120, 117, {{2, EV_SPECIAL_ATTACK}}}, // flaaffy
    {181, 90, 75, 75, 55, 115, 90, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 45, 194, {{3, EV_SPECIAL_ATTACK}}}, // ampharos
    {182, 75, 80, 85, 50, 90, 100, {GRASS_TYPE, GRASS_TYPE}, 45, 184, {{3, EV_SPECIAL_DEFENSE}}}, // bellossom
    {183, 70, 20, 50, 40, 20, 50, {WATER_TYPE, WATER_TYPE}, 190, 58, {{2, EV_HP}}}, // marill
    {184, 100, 50, 80, 50, 50, 80, {WATER_TYPE, WATER_TYPE}, 75, 153, {{3, EV_HP}}}, // azumarill
    {185, 70, 100, 115, 30, 30, 65, {ROCK_TYPE, ROCK_TYPE}, 65, 135, {{2, EV_DEFENSE}}}, // sudowoodo
    {186, 90, 75, 75, 70, 90, 100, {WATER_TYPE, WATER_TYPE}, 45, 185, {{3, EV_SPECIAL_DEFENSE}}}, // politoed
    {187, 35, 35, 40, 50, 35, 55, {GRASS_TYPE, FLYING_TYPE}, 255, 74, {{1, EV_SPECIAL_DEFENSE}}}, // hoppip
    {188, 55, 45, 50, 80, 45, 65, {GRASS_TYPE, FLYING_TYPE}, 120, 136, {{2, EV_SPEED}}}, // skiploom
    {189, 75, 55, 70, 110, 55, 85, {GRASS_TYPE, FLYING_TYPE}, 45, 176, {{3, EV_SPEED}}}, // jumpluff
    {190, 55, 70, 55, 85, 40, 55, {NORMAL_TYPE, NORMAL_TYPE}, 45, 94, {{1, EV_SPEED}}}, // aipom
    {191, 30, 30, 30, 30, 30, 30, {GRASS_TYPE, GRASS_TYPE}, 235, 52, {{1, EV_SPECIAL_ATTACK}}}, // sunkern
    {192, 75, 75, 55, 30, 105, 85, {GRASS_TYPE, GRASS_TYPE}, 120, 146, {{2, EV_SPECIAL_ATTACK}}}, // sunflora
    {193, 65, 65, 45, 95, 75, 45, {BUG_TYPE, FLYING_TYPE}, 75, 147, {{1, EV_SPEED}}}, // yanma
    {194, 55, 45, 45, 15, 25, 25, {WATER_TYPE, GROUND_TYPE}, 255, 52, {{1, EV_HP}}}, // wooper
    {195, 95, 85, 85, 35, 65, 65, {WATER_TYPE, GROUND_TYPE}, 90, 137, {{2, EV_HP}}}, // quagsire
    {196, 65, 65, 60, 110, 130, 95, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 45, 197, {{2, EV_SPECIAL_ATTACK}}}, // espeon
    {197, 95, 65, 110, 65, 60, 130, {DARK_TYPE, DARK_TYPE}, 45, 197, {{2, EV_SPECIAL_DEFENSE}}}, // umbreon
    {198, 60, 85, 42, 91, 85, 42, {DARK_TYPE, FLYING_TYPE}, 30, 107, {{1, EV_SPEED}}}, // murkrow
    {199, 95, 75, 80, 30, 100, 110, {WATER_TYPE, PSYCHIC_TYPE}, 70, 164, {{2, EV_SPECIAL_DEFENSE}}}, // slowking
    {200, 60, 60, 60, 85, 85, 85, {GHOST_TYPE, GHOST_TYPE}, 45, 147, {{1, EV_SPECIAL_DEFENSE}}}, // misdreavus
    {201, 48, 72, 48, 48, 72, 48, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 225, 61, {{1, EV_ATTACK}, {1, EV_SPECIAL_ATTACK}}}, // unown
    {202, 190, 33, 58, 33, 33, 58, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 45, 177, {{2, EV_HP}}}, // wobbuffet
    {203, 70, 80, 65, 85, 90, 65, {NORMAL_TYPE, PSYCHIC_TYPE}, 60, 149, {{2, EV_SPECIAL_ATTACK}}}, // girafarig
    {204, 50, 65, 90, 15, 35, 35, {BUG_TYPE, BUG_TYPE}, 190, 60, {{1, EV_DEFENSE}}}, // pineco
    {205, 75, 90, 140, 40, 60, 60, {BUG_TYPE, STEEL_TYPE}, 75, 118, {{2, EV_DEFENSE}}}, // forretress
    {206, 100, 70, 70, 45, 65, 65, {NORMAL_TYPE, NORMAL_TYPE}, 190, 75, {{1, EV_HP}}}, // dunsparce
    {207, 65, 75, 105, 85, 35, 65, {GROUND_TYPE, FLYING_TYPE}, 60, 108, {{1, EV_DEFENSE}}}, // gligar
    {208, 75, 85, 200, 30, 55, 65, {STEEL_TYPE, GROUND_TYPE}, 25, 196, {{2, EV_DEFENSE}}}, // steelix
    {209, 60, 80, 50, 30, 40, 40, {NORMAL_TYPE, NORMAL_TYPE}, 190, 63, {{1, EV_ATTACK}}}, // snubbull
    {210, 90, 120, 75, 45, 60, 60, {NORMAL_TYPE, NORMAL_TYPE}, 75, 178, {{2, EV_ATTACK}}}, // granbull
    {211, 65, 95, 75, 85, 55, 55, {WATER_TYPE, POISON_TYPE}, 45, 100, {{1, EV_ATTACK}}}, // qwilfish
    {212, 70, 130, 100, 65, 55, 80, {BUG_TYPE, STEEL_TYPE}, 25, 200, {{2, EV_ATTACK}}}, // scizor
    {213, 20, 10, 230, 5, 10, 230, {BUG_TYPE, ROCK_TYPE}, 190, 80, {{1, EV_DEFENSE}, {1, EV_SPECIAL_DEFENSE}}}, // shuckle
    {214, 80, 125, 75, 85, 40, 95, {BUG_TYPE, FIGHTING_TYPE}, 45, 200, {{2, EV_ATTACK}}}, // heracross
    {215, 55, 95, 55, 115, 35, 75, {DARK_TYPE, ICE_TYPE}, 60, 132, {{1, EV_SPEED}}}, // sneasel
    {216, 60, 80, 50, 40, 50, 50, {NORMAL_TYPE, NORMAL_TYPE}, 120, 124, {{1, EV_ATTACK}}}, // teddiursa
    {217, 90, 130, 75, 55, 75, 75, {NORMAL_TYPE, NORMAL_TYPE}, 60, 189, {{2, EV_ATTACK}}}, // ursaring
    {218, 40, 40, 40, 20, 70, 40, {FIRE_TYPE, FIRE_TYPE}, 190, 78, {{1, EV_SPECIAL_ATTACK}}}, // slugma
    {219, 50, 50, 120, 30, 80, 80, {FIRE_TYPE, ROCK_TYPE}, 75, 154, {{2, EV_DEFENSE}}}, // magcargo
    {220, 50, 50, 40, 50, 30, 30, {ICE_TYPE, GROUND_TYPE}, 225, 78, {{1, EV_ATTACK}}}, // swinub
    {221, 100, 100, 80, 50, 60, 60, {ICE_TYPE, GROUND_TYPE}, 75, 160, {{1, EV_HP}, {1, EV_ATTACK}}}, // piloswine
    {222, 55, 55, 85, 35, 65, 85, {WATER_TYPE, ROCK_TYPE}, 60, 113, {{1, EV_DEFENSE}, {1, EV_SPECIAL_DEFENSE}}}, // corsola
    {223, 35, 65, 35, 65, 65, 35, {WATER_TYPE, WATER_TYPE}, 190, 78, {{1, EV_SPECIAL_ATTACK}}}, // remoraid
    {224, 75, 105, 75, 45, 105, 75, {WATER_TYPE, WATER_TYPE}, 75, 164, {{1, EV_ATTACK}, {1, EV_SPECIAL_ATTACK}}}, // octillery
    {225, 45, 55, 45, 75, 65, 45, {ICE_TYPE, FLYING_TYPE}, 45, 183, {{1, EV_SPEED}}}, // delibird
    {226, 65, 40, 70, 70, 80, 140, {WATER_TYPE, FLYING_TYPE}, 25, 168, {{2, EV_SPECIAL_DEFENSE}}}, // mantine
    {227, 65, 80, 140, 70, 40, 70, {STEEL_TYPE, FLYING_TYPE}, 25, 168, {{2, EV_DEFENSE}}}, // skarmory
    {228, 45, 60, 30, 65, 80, 50, {DARK_TYPE, FIRE_TYPE}, 120, 114, {{1, EV_SPECIAL_ATTACK}}}, // houndour
    {229, 75, 90, 50, 95, 110, 80, {DARK_TYPE, FIRE_TYPE}, 45, 204, {{2, EV_SPECIAL_ATTACK}}}, // houndoom
    {230, 75, 95, 95, 85, 95, 95, {WATER_TYPE, DRAGON_TYPE}, 45, 207, {{1, EV_ATTACK}, {1, EV_SPECIAL_ATTACK}, {1, EV_SPECIAL_DEFENSE}}}, // kingdra
    {231, 90, 60, 60, 40, 40, 40, {GROUND_TYPE, GROUND_TYPE}, 120, 124, {{1, EV_HP}}}, // phanpy
    {232, 90, 120, 120, 50, 60, 60, {GROUND_TYPE, GROUND_TYPE}, 60, 189, {{1, EV_ATTACK}, {1, EV_DEFENSE}}}, // donphan
    {233, 85, 80, 90, 60, 105, 95, {NORMAL_TYPE, NORMAL_TYPE}, 45, 180, {{2, EV_SPECIAL_ATTACK}}}, // porygon2
    {234, 73, 95, 62, 85, 85, 65, {NORMAL_TYPE, NORMAL_TYPE}, 45, 165, {{1, EV_ATTACK}}}, // stantler
    {235, 55, 20, 35, 75, 20, 45, {NORMAL_TYPE, NORMAL_TYPE}, 45, 106, {{1, EV_SPEED}}}, // smeargle
    {236, 35, 35, 35, 35, 35, 35, {FIGHTING_TYPE, FIGHTING_TYPE}, 75, 91, {{1, EV_ATTACK}}}, // tyrogue
    {237, 50, 95, 95, 70, 35, 110, {FIGHTING_TYPE, FIGHTING_TYPE}, 45, 138, {{2, EV_SPECIAL_DEFENSE}}}, // hitmontop
    {238, 45, 30, 15, 65, 85, 65, {ICE_TYPE, PSYCHIC_TYPE}, 45, 87, {{1, EV_SPECIAL_ATTACK}}}, // smoochum
    {239, 45, 63, 37, 95, 65, 55, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 45, 106, {{1, EV_SPEED}}}, // elekid
    {240, 45, 75, 37, 83, 70, 55, {FIRE_TYPE, FIRE_TYPE}, 45, 117, {{1, EV_SPEED}}}, // magby
    {241, 95, 80, 105, 100, 40, 70, {NORMAL_TYPE, NORMAL_TYPE}, 45, 200, {{2, EV_DEFENSE}}}, // miltank
    {242, 255, 10, 10, 55, 75, 135, {NORMAL_TYPE, NORMAL_TYPE}, 30, 255, {{3, EV_HP}}}, // blissey
    {243, 90, 85, 75, 115, 115, 100, {ELECTRIC_TYPE, ELECTRIC_TYPE}, 3, 216, {{1, EV_SPECIAL_ATTACK}, {2, EV_SPEED}}}, // raikou
    {244, 115, 115, 85, 100, 90, 75, {FIRE_TYPE, FIRE_TYPE}, 3, 217, {{1, EV_HP}, {2, EV_ATTACK}}}, // entei
    {245, 100, 75, 115, 85, 90, 115, {WATER_TYPE, WATER_TYPE}, 3, 215, {{1, EV_DEFENSE}, {2, EV_SPECIAL_DEFENSE}}}, // suicune
    {246, 50, 64, 50, 41, 45, 50, {ROCK_TYPE, GROUND_TYPE}, 45, 67, {{1, EV_ATTACK}}}, // larvitar
    {247, 70, 84, 70, 51, 65, 70, {ROCK_TYPE, GROUND_TYPE}, 45, 144, {{2, EV_ATTACK}}}, // pupitar
    {248, 100, 134, 110, 61, 95, 100, {ROCK_TYPE, DARK_TYPE}, 45, 218, {{3, EV_ATTACK}}}, // tyranitar
    {249, 106, 90, 130, 110, 90, 154, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 3, 220, {{3, EV_SPECIAL_DEFENSE}}}, // lugia
    {250, 106, 130, 90, 90, 110, 154, {FIRE_TYPE, FLYING_TYPE}, 3, 220, {{3, EV_SPECIAL_DEFENSE}}}, // ho_oh
    {251, 100, 100, 100, 100, 100, 100, {PSYCHIC_TYPE, PSYCHIC_TYPE}, 45, 64, {{3, EV_HP}}} // celebi
};


#endif