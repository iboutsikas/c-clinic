#include "player.h"

void constructor(player_t* this, int x, int y, int health, int attack)
{
	this->health = health;
	this->attack = attack;
	this->x = x;
	this->y = y;
}

void move(player_t* this, int x, int y)
{
	this->x += x;
	this->y += y;
}

void attack(player_t* this, player_t* other)
{
	other->health -= this->attack;
}
