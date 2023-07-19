#include "main.h"
/**
 * times_table - print 9 times table
 *
 *
 *Return: 0 or anywhere
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int Res = i * j;

			if (Res < 10)
			{
				_putchar(Res + '0');
			}
			else
			{
				_putchar((Res / 10) + '0');
				_putchar((Res % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
