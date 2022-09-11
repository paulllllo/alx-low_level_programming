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
char a;

for (tmp = 'a' ; tmp <= 'z' ; tmp++)
{
	putchar(tmp);

}

for (a = 'A' ; a <= 'Z' ; a++)
{
	putchar(a);
	if (a == 'Z')
		putchar('\n');
}

return (0);

}
