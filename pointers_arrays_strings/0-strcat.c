#include "main.h"
/**
 * _strcat - print a function that concatenates two strings
 * @dest: int
 * @src: int
 * Return: Always (success)
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a]; a++)
	{
	}
	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
