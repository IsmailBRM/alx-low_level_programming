#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: 1st char
 * @src: 2nd char
 * @n: unsigned int
 *
 *Return: return to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
