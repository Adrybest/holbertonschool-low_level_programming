#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: int
 * @argv: tableau
 * Return: Always (success)
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, c;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);
	return (0);
}
