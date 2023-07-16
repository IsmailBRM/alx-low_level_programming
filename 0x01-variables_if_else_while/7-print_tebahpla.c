#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char Lttr;

	for (Lttr = 'z'; Lttr >= 'a'; Lttr--)
	{
		putchar(Lttr);
	}

	putchar('\n');

	return (0);
}
