#include "main.h"
/**
 * _strlen - write a function that returns the length of a string
 *
 *@s: character
 *Return: nothing
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
