#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 *@a: 1st int
 *@b: 2nd int
 *
 *Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
