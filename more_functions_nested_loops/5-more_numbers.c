#include "main.h"
/**
 * more_numbers - print 10 times the numbers
 * Return: 0
 */
void more_numbers(void)
{
	int number;
	char alphabet;

	for (number = '0'; number <= '14'; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
}
