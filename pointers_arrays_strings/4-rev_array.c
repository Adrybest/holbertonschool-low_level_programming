#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: Always (success)
 */
void reverse_array(int *a, int n)
{
	int c, b;

	for (c = n - 1; c >= n / 2; c--)
	{
		b = a[n - 1 - c];
		a[n - 1 - c] = a[c];
		a[c] = b;
	}
}
