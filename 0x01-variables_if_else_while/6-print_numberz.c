#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - This program prints numbers from 0-9
 *
 * Return: Returns null
 */

int main(void)

{

int tmp;


for (tmp = 0 ; tmp <= 9 ; tmp++)
{
	putchar(tmp + '0');
	if (tmp == 9)
		putchar('\n');
}

return (0);

}
