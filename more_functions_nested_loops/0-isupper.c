#include "main.h"
/**
 * _isupper - check uppercase character
 * Return: 0
 *@c: int
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

		else
			return (0);
}
