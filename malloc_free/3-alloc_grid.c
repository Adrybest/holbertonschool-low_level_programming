#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: NULL on failture
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int a, b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(width * sizeof(int));

	if (ptr = '\0')
	{
		return ('\0');
	}

