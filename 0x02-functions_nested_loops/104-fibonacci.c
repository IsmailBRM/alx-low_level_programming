#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int cnt, init0s;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (cnt = 1; cnt <= 98; cnt++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		init0s = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && init0s > 0)
		{
			printf("%d", 0);
			init0s--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (cnt != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
