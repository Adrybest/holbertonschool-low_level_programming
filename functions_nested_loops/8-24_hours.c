#include "main.h"
/**
 * jack_bauer - print every minutes
 * Return: 0
 * @h, H: betty
 * @m, M: Betty
 */
void jack_bauer(void)
{
	int h, H;
	int m, M;

	for (h = 0; h <= 2; h++)
	{
		for (H = 0; H <= 3; H++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (M = 0; M <= 9; M++)
				{
					_putchar('0' + h);
					_putchar('0' + H);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + M);
					_putchar('\n');
					if (h == 2 && H == 3 && m == 5 && M == 9)
					{
						return;
					}
				}
			}
		}
	}
}

