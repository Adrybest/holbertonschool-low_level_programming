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

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		ptr[a] = malloc(width * sizeof(int));

		if (ptr[a] == NULL)
		{
			for (; a >= 0; a--)
			free(ptr[a]);

			free(ptr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ptr[a][b] = 0;
	}
	return (ptr);
}
