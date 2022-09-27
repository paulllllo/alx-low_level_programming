#include "main.h"

/**
 * _memset - Sets a n number of memory spaces to a certain constant value
 *
 *@s: A pointer to the address of the start of replacement
 *@b: A constant value
 *@n: Number of bytes to be replaced
 *
 * Return: Returns the pointer 's'.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
