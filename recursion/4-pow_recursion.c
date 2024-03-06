#include "main.h"
/**
 * _pow_recursion - function that returns the value.
 * @x: int
 * @y: int
 * Return: Always (success)
 */
int _pow_recursion(int x, int y)
{
	int a = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (a * _pow_recursion(x, y - 1));
}
