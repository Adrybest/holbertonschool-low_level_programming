#include <stdio.h>
/**
 * main - print number hexadecimal
 * Return: 0
 */
int main(void)
{
	int number;
	int alphabet;

	for (number = '0'; number <= '9'; number++)
		putchar(number);

		for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
			putchar(alphabet);

	putchar('\n');
	return (0);
}
