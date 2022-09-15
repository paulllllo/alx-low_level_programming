#include "main.h"

/**
 * print_alphabet - A function that prints alphabet in lowercase 10 times
 *
 * Return: Returns nothing
 */

void print_alphabet_x10(void)
{
	int a;
	int i;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
		{
			_putchar(i);

			if (i == 'z')
				_putchar('\n');
		}

	}
}
