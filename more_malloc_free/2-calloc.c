#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: Always (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);

	if (a == NULL)
	{
		return (NULL);
	}

	b = a;

	for (c = 0; c < (size * nmemb); c++)
	{
		b[c] = '\0';
	}

	return (a);
}

