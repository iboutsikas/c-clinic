#pragma once

typedef struct player {
	int health;
	int attack;
	int x;
	int y;
} player_t;

void constructor(player_t* this, int x, int y, int health, int attack);
void move(player_t* this, int x, int y);
void attack(player_t* this, player_t* other);