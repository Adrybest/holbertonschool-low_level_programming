#include "main.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring
 * @s: ptr
 * @accept: ptr
 * Return: Always (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			return (c);
		}
	}
	return (c);
}
