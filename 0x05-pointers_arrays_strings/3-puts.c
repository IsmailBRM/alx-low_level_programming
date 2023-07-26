#include "main.h"
/**
 * _puts - Write a function that prints a string
 *
 *@str: string
 *Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
