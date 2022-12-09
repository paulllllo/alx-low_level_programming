#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print each string of a doubly linked list
 * @h: the head of a doubly linked list
 * Return: the length of the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
