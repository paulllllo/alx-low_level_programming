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

for (tmp = 'z' ; tmp >= 'a' ; tmp--)
{
	putchar(tmp);
	if (tmp == 'a')
		putchar('\n');
}

return (0);

}
