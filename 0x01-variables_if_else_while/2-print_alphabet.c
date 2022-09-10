#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - This program prints the alphabets
 */

int main(void)

{

char tmp;

for (tmp = 'a' ; tmp <= 'z' ; tmp ++)
{
	putchar(tmp);
	if (tmp == 'z')
		putchar('\n');
}

return (0);

}
