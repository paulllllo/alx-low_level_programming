#include "function_pointers.h"

/**
 * array_iterator - performs a function arg on all elements of an array arg
 *
 *@array: An array of size size
 *@size: size of array
 *@action: pointer to function that iterates on array elements
 *
 * Return: Returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, length = (int) size;

	if (!array || !size || !action)
		return;
	for (i = 0 ; i < length ; i++)
	{
		action(array[i]);
	}
}
