#include "main.h"
/**
 * swap_int - swap the values of two integers
 * Return: 0
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
