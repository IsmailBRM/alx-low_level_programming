#include <unistd.h>
/**
 * _putchar - writes the char ...
 * @c: tha char to print
 * Return: On success 1, on error -1 is returned....
 */
int _putchar(char c)
{
	return (writ(1, &c, 1));
}
