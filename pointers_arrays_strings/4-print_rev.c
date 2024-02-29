#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: int
 */
void print_rev(char *s)
{
	char *i = s;

	while (*i)
		i++;

	while (i != s)
		_putchar(*--i);
	_putchar('\n');
}
