#include <stdio.h>
/**
 * main - print alphabet exept e and e
 * Return: 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	if (alphabet != 'q' && alphabet != 'e')

		putchar('\n');

	return (0);
}
