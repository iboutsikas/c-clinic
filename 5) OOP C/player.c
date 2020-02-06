#include "player.h"

void constructor(player_t* this, int x, int y, int health, int attack)
{
	if (health > 0 && health <= 100) {
		this->health = health;
	}

	if (attack >= 0) {
		this->attack = attack;
	}

	this->x = x;
	this->y = y;
	this->is_alive = 1;
}

void move(player_t* this, int x, int y)
{
	this->x += x;
	this->y += y;
}

void attack(player_t* this, player_t* other)
{
	other->health -= this->attack;
	if (other->health <= 0) {
		other->is_alive = 0;
	}
}
