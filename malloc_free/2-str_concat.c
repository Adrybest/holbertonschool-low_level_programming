#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int b, c = 0, u = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (b = 0; s1[b] || s2[b]; b++)
	{
		u++;
	}

	a = malloc(u * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; s1[b]; b++)
	{
		a[c++] = s1[b];
	}
	for (b = 0; s2[b]; b++)
	{
		a[c++] = s2[b];
	}
	return (a);
}
