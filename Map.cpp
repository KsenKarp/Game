#include <iostream>
#include "Header.h"
#include "Map.h"

Map::Map() : enemy(new Enemy()), food(new Food()), snake(new Snake()) {};