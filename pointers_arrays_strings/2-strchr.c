#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: ptr
 * @c: char
 * Return: Always (success)
 */
char *_strchr(char *s, char c)
{
	for (; *s != c; s++)
	{
		if (*s == c)
		{
			return ('\0');
		}
		else
		{
		}
	}
	return (s);
}
