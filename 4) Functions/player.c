#include "player.h"
#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable: 6011 6386)

player_t* create_players1()
{
	player_t players[5];

	for (int i = 0; i < 5; i++)
	{
		players[i].x = i;
		players[i].y = i;
	}

	return players;
}

player_t* create_players2(int how_many)
{
	player_t* players = malloc(how_many * sizeof(player_t));

	for (int i = 0; i < how_many; i++)
	{
		players[i].x = i;
		players[i].y = i;
	}

	return players;
}

int create_players3(player_t* array_ptr, int how_many)
{
	array_ptr = malloc(how_many * sizeof(player_t));

	if (array_ptr == NULL) {
		// Could not allocate memory, need to return error
		return 0;
	}
	for (int i = 0; i < how_many; i++)
	{
		array_ptr[i].x = i;
		array_ptr[i].y = i;
	}
	
	// everything went well, return success
	return 1;
}

int create_players4(player_t** array_ptr, int how_many)
{
	*array_ptr = malloc(how_many * sizeof(player_t));

	player_t* players = *array_ptr;

	if (players == NULL) {
		// Could not allocate memory, need to return error
		return 0;
	}

	for (int i = 0; i < how_many; i++)
	{
		players[i].x = i;
		players[i].y = i;
	}

	// everything went well, return success
	return 1;
}

void move_player(player_t player, int x, int y)
{
	player.x += x;
	player.y += y;
}

void print_players(player_t* players, int how_many)
{
	for (int i = 0; i < how_many; ++i) {
		player_t* p = &players[i];

		printf("Player %d: { %d, %d }\n", i + 1, p->x, p->y);
	}
}
