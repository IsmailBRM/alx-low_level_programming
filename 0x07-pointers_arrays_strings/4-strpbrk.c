#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: 1st char
 * @accept: 2nd char
 *
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
