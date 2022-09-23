#include "main.h"

/**
 * _strncpy - copies a string into another string while using a third param
 *
 *@dest: A string
 *@src: A string
 *@n: An integer
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
