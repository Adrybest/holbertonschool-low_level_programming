#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: ptr
 * @c: char
 * Return: Always (success)
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	for (a = 0; s[a]; a++)
	{
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
