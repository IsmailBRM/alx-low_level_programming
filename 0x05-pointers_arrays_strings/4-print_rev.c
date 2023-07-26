#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 *
 *@s: string
 *Return: nothing
 */
void print_rev(char *s)
{
	if (s == NUL)
		return;

	char *end = s;

	while (*end != '\0')
		end++;

	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}

	_putchar('\n');
}
