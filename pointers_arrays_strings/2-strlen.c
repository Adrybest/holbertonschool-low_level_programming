#include "main.h"
/**
 * _strlen - returns the length of a string
 * Return: 0
 * @s: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
		return (i);
}
