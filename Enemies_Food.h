#pragma once
#ifndef EF
#define EF

class Food {
public:
	int x;
	int y;
	Food();
};

class Enemy {
public:
	int x;
	int y;
	//enum Direction dir;
	Enemy();
	void move();
};

#endif