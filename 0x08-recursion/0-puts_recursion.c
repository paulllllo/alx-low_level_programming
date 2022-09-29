#include "main.h"

/**
 * _puts_recursion - recursively prints a string char by char
 *
 *@s: A string
 *
 * Return: return void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
		if (s[i] == '\0')
			_putchar('\n');
	}
}
