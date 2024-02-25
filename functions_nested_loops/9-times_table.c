#include "main.h"
/**
 * times_table - print the table
 * Return: 0
 *@n0, n1, n2, n3, n4: int
 */
void times_table(void)
{
	int n0, n1, n2, n3, n4;

	for (n0 = 0; n0 <= 9; n0++)
	{
		for (n1 = 0; n1 <= 9; n1++)
		{
			n2 = n0 * n1;

			if (n2 > 9)
			{
				n3 = n2 % 10;
				n4 = (n2 - n3) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(n4 + '0');
				_putchar(n3 + '0');
			}
			else
			{
				if (n1 != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(n2 + '0');
			}
		}
		_putchar('\n');
	}
}
