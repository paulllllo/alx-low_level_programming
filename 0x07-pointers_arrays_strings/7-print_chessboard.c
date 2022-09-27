#include "main.h"

/**
 * print_chessboard - Prints chessboard
 *
 *@a: A pointer to an two-dimentional array with 8 columns
 *
 * Return: Returns NULL;
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
