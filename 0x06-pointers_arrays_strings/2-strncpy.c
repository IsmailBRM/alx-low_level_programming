#include "main.h"
/**
 * *_strncpy - function that copies a string
 *
 * @dest: 1st char
 * @src: 2nd char
 * @n: integer
 *
 *Return: @dest
 */
int *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = i; i < n; i++)
		dest[i] = '\0';
}
