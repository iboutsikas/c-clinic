#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 6011)

typedef struct potato {
	int size;
} potato_t;

int main(void) {

	potato_t* potatoes = (potato_t*)malloc(5 * sizeof(potato_t));


	potato_t p = potatoes[3];
	p.size = 10;

	printf("p.size = %d\n", p.size);
	printf("potatoes[3].size = %d\n", potatoes[3].size);


















	potato_t* p_ptr = &potatoes[3];
	p_ptr->size = 10;

	printf("p->size = %d\n", p_ptr->size);
	printf("potatoes[3].size = %d\n", potatoes[3].size);
	return 0;
}