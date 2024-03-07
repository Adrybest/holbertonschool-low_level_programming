#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer.
 * @n: int
 * Return: 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	return (_entier(n, 1));
}
/**
 * _entier - calcule les nombers premiers naturel
 * @n: int
 * @a: int
 * Return: Always (success)
 */
int _entier(int n, int a)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % a == 0 && a > 1)
	{
		return (0);
	}
	if ((n / a) < a)
	{
	return (1);
	}
	return (_entier(n, a + 1));
}
