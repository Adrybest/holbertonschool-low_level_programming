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
	int a, b = 0;

	for (a = 0; src[a]; a++)
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (a = b; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
