#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: tableau
 * @size: taille
 * @cmp: int
 * Return: Always (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
