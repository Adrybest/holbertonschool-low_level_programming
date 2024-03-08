#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: int
 * @argv: tableau
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	unsigned int c, d;

	for (c = 0; argv[c]; c++)
	{
		a = argv[c];
	}
	for (d = 0; argv[d]; d++)
	{
		b = argv[d];
	}
	if (atoi(argc))
	{
		printf("Error\n");
		return (1);
	}
}
