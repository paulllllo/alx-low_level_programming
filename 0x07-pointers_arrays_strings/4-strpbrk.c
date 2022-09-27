#include "main.h"

/**
 * _strpbrk - returns a pointer to the char match of any of a set of bytes
 *
 *@s: A pointer to the source array to be searched through
 *@accept: string to be found
 *
 * Return: Returns an unsigned int representing thr no of chars found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
