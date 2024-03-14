#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: Always (success)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, b;

	if (min > max)
	{
		return (NULL);
	}
	a = max - min + 1;

	ptr = malloc(sizeof(int) * a);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < a; b++)
	{
		ptr[b] = min + b;
	}
	return (ptr);
}
