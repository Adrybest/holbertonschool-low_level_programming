#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 * @d: pointer
 * Return: Always (success)
 */
char *leet(char *d)
{
	int a = 0, b = 0, c = 5;
	char ds[5] = {'A', 'E', 'O', 'T', 'L'};
	char dt[5] = {'4', '3', '0', '7', '1'};

	while (d[a])
	{
		while (b < c)
		{
			if (d[a] == ds[b] || d[a] - 32 == ds[b])
			{
				d[a] = dt[b];
			}
			b++;
		}

		a++;
	}
	return (d);
}
