#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a list
 * @h: the headof the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = NULL;

	current = h;

	if (!h)
		return (0);

	while (current)
	{
		printf("%d\n", current -> n);
		count++;
		current = current -> next;
	}
	return (count);
}
