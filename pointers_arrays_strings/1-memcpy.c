#include "main.h"
/**
 * _memcpy - Write a function that copies memory area
 * @dest: ptr
 * @src: prt
 * @n: int
 * Return: Always (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
