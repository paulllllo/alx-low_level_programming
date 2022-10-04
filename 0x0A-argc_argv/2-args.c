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

int main(int argc, char *argv[])
{
	int i;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
