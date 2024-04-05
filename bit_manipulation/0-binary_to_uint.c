#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: char *
 * Return: the converted number,
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int o = 0, taille;

	if (b == NULL)
	{
		return (0);
	}

	for (taille = 0; b[taille]; taille++)/*take the lenght of string*/
	{
		if (b[taille] != '0' && b[taille] != '1')/*if b is not 0 or 1 return 0*/
		{
			return (0);
		}
		o = (2 * o) + (b[taille] - '0');
	}
	return (o);
}
