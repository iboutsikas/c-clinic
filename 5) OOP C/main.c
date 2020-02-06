#include "player.h"
#include <stdio.h>

int main(void)
{
	player_t p1;
	player_t p2;

	constructor(&p1, 1, 1, 100, 10);
	constructor(&p2, 5, 7, 100, 5);
#pragma region Print Before
	printf("P1\n");
	printf("\tHealth: %d\n", p1.health);
	printf("\tAttack: %d\n", p1.attack);

	printf("P2\n");
	printf("\tHealth: %d\n", p2.health);
	printf("\tAttack: %d\n", p2.attack);


	puts("Player 1 attacks player 2");
#pragma endregion
	
	
	attack(&p1, &p2);

#pragma region Print After
	printf("P1\n");
	printf("\tHealth: %d\n", p1.health);
	printf("\tAttack: %d\n", p1.attack);

	printf("P2\n");
	printf("\tHealth: %d\n", p2.health);
	printf("\tAttack: %d\n", p2.attack);
#pragma endregion
	return 0;

}