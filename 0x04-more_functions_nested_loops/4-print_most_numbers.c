#include "main.h"

/**
 * print_most_numbers -  A function that prints from 0-9 except 2 and 4
 *
 * Return: Returns void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		if (c == 2 || c == 4)
			continue;
		_putchar(c + '0');
	}

	_putchar('\n');
}
