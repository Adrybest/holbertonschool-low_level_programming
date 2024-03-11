#include "main.h"
/**
 * _strdup - Write a function that returns a pointer to a newly allocated space
 * @str: ptr
 * Return: Always (success)
 */
char *_strdup(char *str)
{
	char *a;
	int b, c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		c++;
	}

	a = malloc(sizeof(char) * c + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		a[b] = str[b];
	}
	a[c] = '\0';
	return (a);
}
