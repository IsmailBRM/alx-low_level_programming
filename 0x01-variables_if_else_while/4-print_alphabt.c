#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
 */
int main(void)
{
	char lce = 'a';

	while (lce <= 'z')
	{
		if (lce != 'q' && lce != 'e')
		{
			putchar(lce);
		}
		lce++;
	}

	putchar('\n');

	return (0);

}
