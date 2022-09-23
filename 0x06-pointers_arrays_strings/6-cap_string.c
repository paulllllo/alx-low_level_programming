#include "main.h"

/**
 * cap_string - capitalizes all the words of a string
 *
 *@a: A pointer to the string
 *
 * Return: Returns a pointer to a string
 */

char *cap_string(char *a)
{
	int i = 0;
	int j;
	int k[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		     '?', '"', '(', ')', '{', '}'};

	while (a[i] != '\0')
	{
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = toupper(a[i]);
		}

		for (j = 0; j < 13; j++)
		{
			if (a[i] == k[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] = toupper(a[i + 1]);

			}
		}

		i++;
	}

	return (a);
}
