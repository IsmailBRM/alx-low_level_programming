#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 *@dest: 1st char
 *@src: 2nd char
 *Return: to string dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++]  = src[c2];

	return (dest);
}
