#include "function_pointers.h"

/**
 * print_name - Prints a name passed in as arg through an arg function
 *
 *@name: A string to be printed
 *@f: A function pointe.
 *
 * Return: Returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
