#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int number;
	char alphabet;

	for (number = '0'; number <= '9'; number++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);

		_putchar('\n');
	}
}
