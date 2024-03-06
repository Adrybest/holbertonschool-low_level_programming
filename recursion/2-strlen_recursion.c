#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: ptr
 * Return: Always (success)
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
