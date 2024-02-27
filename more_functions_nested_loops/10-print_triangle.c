#include "main.h"
/**
 * print_triangle - print a triangle
 * Return: 0
 * @size: int
 */
void print_triangle(int size)
{
	int d, s;

		if (size >= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 0; d < size; d++)
		{
			for (s = 0; s < d; s++)
			{
			_putchar('#');
			}
		_putchar(' ');
		_putchar('\n');
		}
	}
}
