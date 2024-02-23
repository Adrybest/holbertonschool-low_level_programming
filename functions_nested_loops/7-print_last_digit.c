#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * Return: 0
 * @n: betty
 */
int print_last_digit(int n)
{
	int print_last_digit  = n % 10;

	if (print_last_digit < 0)
		print_last_digit *= -1;

	_putchar(print_last_digit + '0');

	return (print_last_digit);
}
