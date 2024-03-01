#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: int
 */
void puts2(char *str)
{
	int a, b;

	for (b = 0; str[b] != '\0'; b++)
	{
	}

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
