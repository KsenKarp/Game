#pragma once
#include "Map.h"
#ifndef HEADER
#define HEADER

extern const int height;
extern const int length;
extern enum Direction { NONE = 0, LEFT, RIGHT, UP, DOWN };
extern bool game_over;
extern int score;
extern Map* map;

#endif