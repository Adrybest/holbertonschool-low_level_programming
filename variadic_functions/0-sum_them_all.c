#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: unsigned int
 * Return: Always (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a, b = 0;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		b += va_arg(args, int);
	}
	va_end(args);

	return (b);
}
