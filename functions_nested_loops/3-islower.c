#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: Always success
 * @c: for betty
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

		else
			return (0);
}
