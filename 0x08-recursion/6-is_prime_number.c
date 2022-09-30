#include "main.h"


/**
 * _isprime - recursively checks if a number is prime
 *
 *@r: An integer
 *@n: An integer
 *
 * Return: returns 1 if prime and 0 if not
 */

int _isprime(int r, int n)
{
	if (n <= 1)
		return (0);
	if ((r > 1) && (r <= (n / 2)))
	{
		if ((n % r) == 0)
			return (0);
		_isprime(++r, n);
	}
	return (1);
}


/**
 * is_prime_number - Checks if a number is a prime number
 *
 *@n: An integer
 *
 * Return: returns the 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	return (_isprime(2, n));
}
