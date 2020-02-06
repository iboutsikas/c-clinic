#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


int main(void) {

	uint8_t* p1 = malloc(5 * 1);
	int* p2 = malloc(400 * 4);

	unsigned char p3[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	printf("sizeof(p1) = %d\n", sizeof(p1));
	printf("sizeof(p2) = %d\n", sizeof(p2));
	printf("sizeof(p3) = %d\n", sizeof(p3));

	return 0;
}