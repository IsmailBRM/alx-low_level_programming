#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98
 *@n: the number to start printing from
 *Return:
 */
void print_to_98(int n)
{
	int cnt;

	if (n > 98)
	{
		for (cnt = n; cnt > 98; cnt--)
		{
			printf("%d, ", cnt);
			printf(" ");
		}
	}
	else
	{
		for (cnt = n; cnt < 98; cnt++)
		{
			printf("%d,", cnt);
			printf(" ");
		}
	}
	printf("98\n");
}
