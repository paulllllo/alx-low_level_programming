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
	char charType;
	int intType;
	long int longIntType;
	long long int LLIntType;
	float floatType;

	printf("Size of a char: %zu byte(s),\n", sizeof(charType));
	printf("Size of a int: %zu byte(s),\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s),\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s),\n", sizeof(LLIntType));
	printf("Size of a float: %zu byte(s),\n", sizeof(floatType));

return (0);

}
