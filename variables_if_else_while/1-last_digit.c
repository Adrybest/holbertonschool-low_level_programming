#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Positive or negative number
 * Return: 0
 */
int main(void)
{
	int n; n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if ((n % 10) > 5)
	{
		printf(" Last digit of %d and is greater than 5\n", n % 10);
	}
	else if ((n % 10) < 6)
	{
		printf(" Last digit of %d and is less than 6 and not 0\n", n % 10);
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
