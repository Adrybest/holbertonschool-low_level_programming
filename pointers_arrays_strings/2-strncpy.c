#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: int
 * @src: int
 * @n: int
 * Return: Always (success)
 */
char *_strncpy(char *dest, char *src, int n)
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
	for (a = b; a < n; a++)
	{
	}
	dest[a] = '\0';

	return (dest);
}
