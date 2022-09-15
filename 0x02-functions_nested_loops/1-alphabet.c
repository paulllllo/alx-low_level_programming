#include "main.h"

/**
 * print_alphabet - A function that prints alphabet in lowercase
 *
 * Return: Returns nothing
 */

void print_alphabet(void)
{
	int a;

	for(a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);

		if (a == 'z')
			_putchar('\n');


	}

	return;
}
