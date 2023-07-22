#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 *Return: return result
 */
int print_numbers(void)
{
	int N = 0;

	do {
		_putchar(N + '0');
		N++;
	} while (N >= 0 && N <= 9);
	_putchar('\n');
}
