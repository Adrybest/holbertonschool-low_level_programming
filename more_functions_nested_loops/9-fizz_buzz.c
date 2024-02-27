#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints from 1 to 100
 * Return: 0
 * @number, i: int
 */
int main(void)
{
	int f;

	for (f = 0; f <= 100; f++)
	{
		if ((f % 3) == 0 && (f % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if
			((f % 3) == 0)
			{
				printf("Fizz");
			}
				else if ((f % 5) == 0)
				{
					printf("Buzz");
				}
		else
		{
			printf("%d", f);
		}
		if (f != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
