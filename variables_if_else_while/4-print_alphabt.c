#include <stdio.h>
/**
 * main - print alphabet exept e and e
 * Return: Always (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);

		putchar('\n');

		return (0);
}
