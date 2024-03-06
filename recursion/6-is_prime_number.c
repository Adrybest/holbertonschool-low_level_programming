#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer.
 * @n: int
 * Return: 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	int a = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}

