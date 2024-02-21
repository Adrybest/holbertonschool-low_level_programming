#include <stdio.h>
/**
 * main - print number hexadecimal
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = "48"; number <= "57"; number++)
		putchar(number);
	{
		char * alphabet;

		for (alphabet = "97"; alphabet <= "102"; alphabet++)
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
