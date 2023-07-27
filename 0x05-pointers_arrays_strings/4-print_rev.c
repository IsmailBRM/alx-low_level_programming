#include "main.h"
/**
 * print_rev - Write a function that prints a string, in reverse
 *
 * @s: pointer to the string to print
 * Return: void
 */
void print_rev(char *s)
{
	int end = 0;
	int i;

	while (*s != '\0')
	{
		end++;
		s++;
	}
	s--;
	for (i = end; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
