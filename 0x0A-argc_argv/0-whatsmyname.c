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

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
