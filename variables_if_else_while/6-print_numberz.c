#include <stdio.h>
/**
 * main - print number without used char
 * Return: 0
 */
int main(void)
{
	int number;
	{
		for (number = '0'; number = '9'; number++)
			putchar(number);
	}

	putchar('\n');
	return (0);
}
