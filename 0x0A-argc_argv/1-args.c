#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints its name  on the command line
 *
 * @argc: An integer arguement
 * @argv: A pointer to an array of strings
 *
 * Return: Returns 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = 0;

	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
