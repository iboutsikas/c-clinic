#pragma once

typedef struct player {
	int x;
	int y;
} player_t;

player_t* create_players1(void);
player_t* create_players2(int how_many);
int create_players3(player_t* array_ptr, int how_many);
int create_players4(player_t** array_ptr, int how_many);

void move_player(player_t player, int x, int y);

void print_players(player_t* players, int how_many);