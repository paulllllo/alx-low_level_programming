#include "main.h"

/**
 * _strchr - finds a character in a string
 *
 *@s: A pointer to the source array to be searched through
 *@c: char to be found
 *
 * Return: Returns a pointer to first occurence of c or NULL if none found.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
