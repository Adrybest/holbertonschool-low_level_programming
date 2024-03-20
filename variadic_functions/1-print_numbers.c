#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: const char
 * @n: unsigned int
 * Return: Always (success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int com;

	va_list liste;

	va_start(liste, n);

	for (com = 0; com < n; com++)
	{
		printf("%d", va_arg(liste, int));
		if (com != (n - 1))
		{
			printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(liste);
}
