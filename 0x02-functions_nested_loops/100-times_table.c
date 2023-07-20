#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print time table of n
 *
 *@n: takes number input
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; ++x)
		{
			_putchar(',');
			_putchar(' ');

		i = x * j;

			if (i <= 9)
				_putchar(' ');
			if (i <= 99)
				_putchar(' ');
			if (i >= 100)
			{
				_putchar((i / 100) + 48);
				_putchar((i / 10) % 10 + 48);
			}
			else if (i <= 99 && i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
