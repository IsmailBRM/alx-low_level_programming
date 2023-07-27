#include "main.h"
/**
 * puts2 - function should print only one character out ...
 *
 *@str: input
 *Return: print
 */
void puts2(char *str)
{
	int lgi = 0;
	int y = 0;
	char *j = str;
	int i;

	while (*j != '\0')
	{
		j++;
		lgi++;
	}
	y = lgi - 1;

	for (i = 0; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_pucthar('\n');
}
