#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 *@dest: A string
 *@src: A string
 *@n: An integer
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
