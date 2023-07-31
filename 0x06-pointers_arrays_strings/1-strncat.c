#include "main.h"
/**
 * *_strncat - function that concatenates two strings
 *
 * @dest: 1st char
 * @src: 2nd char
 * @n: integer
 *
 * Return: return to dest
 */
int *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';
}
