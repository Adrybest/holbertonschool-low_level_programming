#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 */
dog_t *new_dog(char *name, float age, char *owner);
	int _strlen(char *str);
	char *_strcopy(char *d, char *src);

/**
 * _strlen - calcule la longueur d'une chaîne done
 * @str: ptr
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
