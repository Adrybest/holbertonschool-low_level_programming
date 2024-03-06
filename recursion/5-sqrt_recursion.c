#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: Always (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_racine(n, 0));
}
/**
 * _racine - calcule la racine
 * @a: int
 * @n: int
 * Return: Always (success)
 */
int _racine(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (_racine(n, a + 1));
}
