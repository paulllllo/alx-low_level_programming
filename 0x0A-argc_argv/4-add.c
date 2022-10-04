#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function that adds positive numbers
 *
 * @argc: An integer arguement
 * @argv: A pointer to an array of strings
 *
 * Return: Returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = argc - 1;

	if (i == 0)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		int j;
		int sum = 0;

		for (j = 1 ; j < argc ; j++)
		{
			char *k = argv[j];

			if (isdigit(*k))
			{
				sum = sum + atoi(k);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
