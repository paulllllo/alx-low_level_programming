#include "main.h"

/**
 * string_toupper - coverts a string to uppercase
 *
 *@a: A pointer to the string
 *
 * Return: Returns a pointer to a string
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (islower(a[i]) > 0)
		{
			a[i] = toupper(a[i]);
		}

		i++;
	}

	return (a);
}
