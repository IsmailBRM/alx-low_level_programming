#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char lw = 'a';
	char UC = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
		lw++;
	}

	while (UC <= 'Z')
	{
		putchar(UC);
		UC++;
	}

	putchar('\n');

	return (0);
}
