#include "main.h"
/**
 * _isalpha - alphabet character
 * Return: 0
 * @c: betty
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
