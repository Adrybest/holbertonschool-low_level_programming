#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: int
 * @src: int
 * Return: Always (sucess)
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
