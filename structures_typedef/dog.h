#ifndef DOG
#define DOG

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - define a new type of struct with elements
 * @name: char
 * @age: float
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
