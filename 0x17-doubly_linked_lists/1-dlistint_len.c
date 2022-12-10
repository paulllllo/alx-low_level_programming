#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a LL
 * @h: the head of a doubly linked list
 * Return: the length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
