#include "main.h"
/**
 *print_alphabet_x10 - print 10 x alphabet
 *
 *Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char lett = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(lett);
			lett;
		}
		lett = 'a';
		_putchar('\n');
	}
}
