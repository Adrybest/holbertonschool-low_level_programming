#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *ptr);
char *copy(char *a, char *b);
/**
 *new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: Always (success)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *e;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	e = malloc(sizeof(dog_t));
	if (e == NULL)
	{
		return (NULL);
	}

	e->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (e->name == NULL)
	{
		free(e);
		return (NULL);
	}

	e->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (e->owner == NULL)
	{
		free(e->name);
		free(e);
		return (NULL);
	}

	e->name = copy(e->name, name);
	e->age = age;
	e->owner = copy(e->owner, owner);

	return (e);
}
/**
 * _strlen - calcul la longueur d'une chaine de caractere
 * @ptr: compte
 * Return: Always (success)
 */

int _strlen(char *ptr)
{
	int c;

	while (*ptr++)
	{
		c++;
	}
	return (c);
}

/**
 * copy - pour copier la chaine de caractere
 * @a: char ptr
 * @b: char ptr
 * Return: Always (success)
 */
char *copy(char *a, char *b)
{
	int d;

	for (d = 0; b[d]; d++)
	{
		a[d] = b[d];
	}
	a[d] = '\0';
	return (a);
}
