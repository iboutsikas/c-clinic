#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> //offsetof
#pragma warning(disable:6011)

struct potato {
	int size;
};

struct message {
	int data;
	float offset;
};

//#include "stdint.h"
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;

typedef struct potato potato_t;
typedef struct message message_t;

int main(void) {

	unsigned char byte = 0xFF; // 11111111 in binary
	char sbyte = byte;

	printf("byte: %d \tsbyte: %d\n", byte, sbyte);

	struct message* m = malloc(sizeof(struct message));
	m->data = 230;
	m->offset = 0.8f;

	uint8_t byte_array[] = { 0xe6, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f };
	message_t* m2 = &byte_array;

	printf("m->data: %d\n", m->data);
	printf("m->offset: %f\n", m->offset);
	printf("m2->data: %d\n", m2->data);
	printf("m2->offset: %f\n", m2->offset);









	struct potato* p = (struct potato*)m;
	printf("p->size: %d\n", p->size);

	/// This is risky, and mainly works because we are in debug mode
	/// and I am abusing the hell out of MSVC
	/// Reminder struct message looks like this:
	/// struct message {
	/// 	int data;
	/// 	float offset;
	/// };

#pragma region Explanation
	/**
	* 1) We cast p from a potato* to a char* (Hint: size of char is one byte)
	* 2) We add to p the sizeof(int) which is 4 (Hint: pointer arithmetic says 
	*											that now p points 4 bytes away 
	*											from where it used to)
	* 3) We store this result as f a float*
	* 
	* Notice how sizeof(int) == sizeof(message.data)
	* f is a pointer to a float. message.offset is a float
	*/
#pragma endregion

	float* f = ((char*)p) + sizeof(int);
	printf("f: %f\n", *f);












	// The correct way to do it is the following:
	float* f2 = ((char*)m) + offsetof(struct message, offset);
	printf("f2: %f\n", *f2);




	free(m);
	return 0;
}