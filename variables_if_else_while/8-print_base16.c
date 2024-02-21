#include <stdio.h>
/**
 * main - print number hexadecimal
 * Return: 0
 */
int main(void)
{
	char * number;

	for (number = "48"; number <= "57"; number++)

		for (number = "97"; number <= "102"; number++)
			putchar(number);

	putchar('\n');
	return (0);
}
