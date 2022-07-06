#include "Header.h"
#include "Player_snake.h"

Snake::snake_node::snake_node() {
	x = length / 2;
	y = height / 2;
	next = nullptr;
	dir = NONE;
}

Snake::snake_node::snake_node(int xx, int yy, enum Direction _dir) {
	x = xx;
	y = yy;
	next = nullptr;
	dir = _dir;
}

Snake::Snake() : head() {};

void Snake:: add() {
	if (!head) {
		head= new snake_node();
	}
	else {
		snake_node* prev_tail = head;
		while (prev_tail->next != nullptr) {
			prev_tail = prev_tail->next;
		}
		Direction _dir = prev_tail->dir;
		if (_dir == 1) {
			snake_node* tail = new snake_node(prev_tail->x + 1, prev_tail->y, _dir);
			prev_tail->next = tail;
		} else if (_dir == 2) {
			snake_node* tail = new snake_node(prev_tail->x - 1, prev_tail->y, _dir);
			prev_tail->next = tail;
		} else if (_dir == 3) {
			snake_node* tail = new snake_node(prev_tail->x, prev_tail->y + 1, _dir);
			prev_tail->next = tail;
		} else if (_dir == 4) {
				snake_node* tail = new snake_node(prev_tail->x, prev_tail->y - 1, _dir);
			prev_tail->next = tail;
		}
		return;
	}
}

Snake::snake_node* Snake:: get_tail() {
	snake_node* tmp = head;
	while (tmp->next != nullptr)
		tmp = tmp->next;
	return tmp;
}

void Snake::fire() {
	if (head->y == map->enemy->y) {
		if (head->dir == 1) {
			for (int i = head->x; i < length; i++) {
				if (i == map->enemy->x) {
					delete map->enemy;
					score = score + 20;
				}
			}
		}
		else if (head->dir == 2) {
			for (int i = head->x; i > 0; i--) {
				if (i == map->enemy->x) {
					delete map->enemy;
					score = score + 20;
				}
			}
		}
	}
	else if (head->x == map->enemy->x) {
		if (head->dir == 3) {
			for (int i = head->y; i > 0; i--) {
				if (i == map->enemy->y) {
					delete map->enemy;
					score = score + 20;
				}
			}
		}
		else if (head->dir == 4) {
			for (int i = head->y; i < height; i++) {
				if (i == map->enemy->x) {
					delete map->enemy;
					score = score + 20;
				}
			}
		}
	}
}