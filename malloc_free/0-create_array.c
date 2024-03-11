#include "main.h"
/**
 * create_array - function that creates an array of chars.
 * @size: int
 * @c: char
 * Return: Always (success)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int f;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return ('\0');
	}
	for (f = 0; f < size; f++)
	{
		s[f] = c;
	}
	return (s);
}
