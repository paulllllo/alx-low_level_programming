#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 *
 *@n: An integer
 *
 * Return: returns the factorial of a number or -1 if number is <0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * (factorial(n - 1)));
}
