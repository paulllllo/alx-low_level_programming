#include "main.h"


/**
 * _sqrt_recursion - calculates the square root of an int
 *
 *@n: An integer
 *
 * Return: returns the square root of an int or -1 if square root is not natural
 */

int _sqrt(int r, int n)
{
	if (r <= n / 2)
	{
		if (n == 1)
			return n;
		if (r * r != n)
			return (_sqrt(r + 1, n));
		return (r);
	}
	return (-1);
}

int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
