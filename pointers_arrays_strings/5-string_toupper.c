#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase.
 * @p: int
 * Return: Always (success)
 */
char *string_toupper(char *p)
{
	int a;

	for (a = 0; p[a]; a++)

		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}
	a++;
	return (p);
}
