#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ii;

	for (ii = '0'; ii <= '9'; ii++)
	{
		putchar(ii);
	}

	for (ii = 'a'; ii < 'g'; ii++)
	{
		putchar(ii);
	}

	putchar('\n');

	return (0);
}
