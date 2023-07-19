#include "main.h"
/**
 *print_sign - print the sing of a number
 *
 *@n: the input number as an integer
 *
 *Return: 1 if n > 0, -1 if < 0 and 0 if = 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
