#include "main.h"
/**
 * puts_half - print half of a string
 * @str: int
 */
void puts_half(char *str)
{
	int a, b;

	for (b = 1; str[b] != '\0'; b++)
		
		if (b % 2 == 1)
		{
			a = (b - 1) / 2;
		}
		else
		{
			a = b / 2;
		}
	a += 1;
	for (; a < b; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
