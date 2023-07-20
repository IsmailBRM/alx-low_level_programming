#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: calculate sum of all the multiples of 3 or 5 < 1024
 *
 *Return: Always 0
 */
int main(void)
{
	int x, y;

	for (y = 0; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
			x += y;
	}
	printf("%d\n", x);

	return (0);
}
