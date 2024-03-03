#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 * @d: pointer
 * Return: Always (success)
 */
char *leet(char *d)
{
	int a, b;
	char ds[5] = {'A', 'E', 'O', 'T', 'L'};
	char dt[5] = {'4', '3', '0', '7', '1'};

	while (d[a])
	{
		for (b = 0; b <= 7; b++)
		{
			if (d[a] == ds[b] || d[a] - 32 == ds[b])
				d[a] = dt[b] + '0';
		}
		a++;
	}
	return (d);
}
