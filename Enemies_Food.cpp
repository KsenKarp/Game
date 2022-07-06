#include <iostream>
#include "Enemies_Food.h"
#include "Header.h"

Food::Food() {
	x = 1 + rand() % 40;
	y = 1 + rand() % 40;
}

Enemy::Enemy() {
	x = 1 + rand() % 40;
	y = 1 + rand() % 40;
}

void Enemy::move() {

}