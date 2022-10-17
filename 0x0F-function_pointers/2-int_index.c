#include "function_pointers.h"

/**
 * int_index - performs a function arg on all elements of an array arg
 *
 *@array: An array of size size
 *@size: size of array
 *@cmp: pointer to function that iterates on array elements
 *
 * Return: Returns ant which is the index of the matching integer.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !size || !cmp)
		return (-1);
	for (i = 0 ; i < size ; i++)
	{
		int j = cmp(array[i]);

		if (j != 0)
			return (i);
	}
	return (-1);
}
