#include "main.h"

/**
 * print_numbers -  A function that prints from 0-9
 *
 * Return: Returns void
 */

int print_numbers(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		_putchar(c + '0');
	}

	_putchar('\n');
}
