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
	char *ptr = s;

	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(++ptr);
}
