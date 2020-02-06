#include "player.h"
#include <stdio.h>
#include <vld.h>

#pragma warning(disable: 6011)
#define ATTEMPT_1 0
#define ATTEMPT_2 0
#define ATTEMPT_3 0
#define ATTEMPT_4 0
#define CLEAN_UP

int main(void)
{
#if ATTEMPT_1
	puts("===== Attempt 1 =====");
	// Attempt 1
	player_t* attempt1 = create_players1();
	print_players(attempt1, 5);
#endif

#if ATTEMPT_2
	puts("===== Attempt 2 =====");
	// Attempt 2
	player_t* attempt2 = create_players2(7);
	print_players(attempt2, 7);
#endif

#if ATTEMPT_3
	puts("===== Attempt 3 =====");
	player_t* attempt3 = NULL;
	
	int status1 = create_players3(attempt3, 8);
	print_players(attempt3, 8);
#endif

#if ATTEMPT_4
	puts("===== Attempt 4 =====");
	player_t* attempt4 = NULL;
	int status2 = create_players4(&attempt4, 9);
	print_players(attempt4, 9);
#endif


	player_t p;
	p.x = 100;
	p.y = 50;

	move_player(p, 5, 5);

	printf("p.x = %d\t p.y = %d\n", p.x, p.y);




#ifdef CLEAN_UP
#if ATTEMPT_2
	free(attempt2);
#endif
#if ATTEMPT_3
	free(attempt3);
#endif
#if ATTEMPT_4
	free(attempt4);
#endif
#endif
	return 0;
}