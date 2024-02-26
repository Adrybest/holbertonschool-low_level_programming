#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check fot a digit
 * Return: 0
 * @c: int
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

		else
			return (0);
}
