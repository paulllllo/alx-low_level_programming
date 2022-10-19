#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers with a seperator variable
 *
 *@separator: A char which is printed between numbers
 *@n: A constant int that represents the number of var args
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list vars;

	va_start(vars, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(vars, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(vars);
}
