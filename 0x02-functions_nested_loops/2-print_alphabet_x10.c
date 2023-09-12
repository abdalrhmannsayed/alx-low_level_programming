#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int c, r;

	for (r = 0; r <= 9; r++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
