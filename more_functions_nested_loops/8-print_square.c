#include "main.h"
/**
 * print_square - prints a square
 * Return: 0
 * @size: int
 */
void print_square(int size)
{
	int d, s;

	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (s = 0; s < size; s++)
			{
			_putchar('#');
			}
		_putchar('#');
		_putchar('\n');
		}
	}
}
