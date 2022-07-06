#pragma once
#ifndef SNAKE
#define SNAKE

class shoot {
public:
	int x;
	int y;
	shoot(int xx, int yy) : x(xx), y(yy) {};
};

class Snake {
public:
	struct snake_node {
		int x;
		int y;
		enum Direction dir;
		snake_node* next;
		snake_node();
		snake_node(int xx, int yy, enum Direction _dir);
	};
	snake_node* head;
	Snake();
	void add();
	snake_node* get_tail();
	void fire();
};

#endif