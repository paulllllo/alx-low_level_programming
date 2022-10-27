#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the start of the list
 *
 * @head: the head of the linked list
 * @n: data to be stored in linked list;
 *
 * Return: Returns the address of  the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || (!(head)))
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
