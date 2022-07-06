#pragma once
#include "Enemies_Food.h"
#include "Player_snake.h"
#include "Header.h"
#ifndef MAP
#define MAP

class Map {
public:
	Enemy* enemy;
	Food* food;
	Snake* snake;
	Map();
};

#endif