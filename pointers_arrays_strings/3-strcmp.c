#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: int
 * @s2: int
 * Return: Always (success)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
