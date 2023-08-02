#include "main.h"
/**
 * *_memset - fille memory wuth a cst byte
 * @s: 1st char
 * @b: 2nd char
 * @n: unsigned int
 * Return: to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}
