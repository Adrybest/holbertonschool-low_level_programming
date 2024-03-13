#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: ptr
 * @s2: ptr
 * @n: unsigned int
 * Return: Always (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int c = n, a;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a]; a++)
	{
		c++;
	}
	ptr = malloc(sizeof(char) * (c + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	c = 0;

	for (a = 0; s1[a]; a++)
	{
		ptr[c++] = s1[a];
	}
	for (a = 0; s2[a] && a < n; a++)
	{
		ptr[c++] = s2[a];
	}
	ptr[c] = '\0';
	return (ptr);
}
