#include "3-calc.h"
/**
 * main - print the result
 * @a: int
 * @tab: tableau
 * Return: the result of a and b
 */
int main(int a, char *tab[])
{
	int num1, num2;
	char *op;

	if (a != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(tab[1]);
	op = tab[2];
	num2 = atoi(tab[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
