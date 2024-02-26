#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int number, i;

	for (i = 0; i <= 9; i++)
	{
		for (number = 0; number <= 14; number++)
			_putchar(number / 10 + '0');
			_putchar(number % 10 + '0');

		_putchar('\n');
	}
}
