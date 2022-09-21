#include "main.h"

/**
 * print_rev - prints a string with a newline in reverse at the end to stdout
 *
 *@a: string arguement
 *
 * Return: Returns the var tmp.
 */

void print_rev(char *a)
{
	int j, i;

	int count = strlen(a);

	j = count - 1;

	for (i = j; i >= 0; i--)
	{
		_putchar(a[i]);

		if (i == 0)
		{
			_putchar('\0');
			_putchar('\n');
		}
	}

}
