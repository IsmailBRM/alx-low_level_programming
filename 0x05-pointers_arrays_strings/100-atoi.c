#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *
 *@s: character
 *
 *Return: always 0
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int sgn = 1;

	do {
		if (*s == '-')
			sgn *= -1;

		else if (*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		else if (i > 0)
			break;
	} while (*s++);

	return (i * sgn);
}
