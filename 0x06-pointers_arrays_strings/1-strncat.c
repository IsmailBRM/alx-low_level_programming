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

	for (c = 0; dest[c] != '\0'; c++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[c + 1] = src[i];
	}
	return (dest);
}
