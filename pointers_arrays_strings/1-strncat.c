#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: int
 * @src: int
 * @n: int
 * Return: Always (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a]; a++)
	{
	}
	for (b = 0; src[b] != 0 && b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}
