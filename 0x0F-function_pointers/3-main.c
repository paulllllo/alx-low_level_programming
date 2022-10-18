#include "3-calc.h"

/**
 *main - A program that does simple operations
 *
 *@argc: An int that indicates program variables
 *@argv: size of array
 *
 * Return: returns 0
 */

int main(int argc,
	 char *argv[])
{
	int a, b;

	int (*c)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	     && (strcmp(argv[3], "0") == 0))
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = get_op_func(argv[2]);
	if (c == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", c(a, b));
	return (0);
}
