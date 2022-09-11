#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - This program prints the alphabets
 *
 * Return: Returns null
 */

int main(void)

{

char tmp;

for (tmp = 'a' ; tmp <= 'z' ; tmp++)
{
	putchar(tmp);

	if (tmp == 'z')
	{
		for (tmp = 'A' ; tmp <= 'Z' ; tmp++)
		{
			putchar(tmp);

			if (tmp == 'Z')
				putchar('\n');
		}
	}

}

return (0);

}
