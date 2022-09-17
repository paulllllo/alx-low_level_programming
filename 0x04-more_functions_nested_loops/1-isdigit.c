#include "main.h"

/**
 * _isdigit -  A function that checks if a int is a digit
 *
 * @c: An integer arguement
 *
 * Return: Returns 0 or 1
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	else
		return (0);
}
