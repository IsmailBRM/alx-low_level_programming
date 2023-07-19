#include "main.h"
/**
 * times_table - print 9 times table
 *
 *
 *Return: 0 or anywhere
 */
void times_table(void)
{
	int i, j, x, y, w;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = i * j;

			if (x > 9)
			{
				y = x % 10;
				w = (x - y) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(w + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
