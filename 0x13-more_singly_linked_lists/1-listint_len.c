#include <stdlib.h>
#include "lists.h"

/**
 * listint_ent - A function that counts all the elements of a list
 * @h: the head of the linked list
 *
 * Return: Returns the number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = NULL;

	current = h;

	if (!h)
		return (0);

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
