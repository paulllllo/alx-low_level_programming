#include "main.h"


/**
 * _pow_recursion - calculates the power of an int to another int
 *
 *@x: An integer
 *@y: An integer
 *
 * Return: returns the power of an int or -1 if power is <0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, --y)));
}
