#include "main.h"
/**
 * char *_strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 *@dest: 1st char copy to
 *@src: 2nd char copy from
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
