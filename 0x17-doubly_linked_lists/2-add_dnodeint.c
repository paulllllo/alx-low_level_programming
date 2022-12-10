#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the start of a DLL
 *
 * @head: the head of a doubly linked list
 * @n: the int in DLL
 *
 * Return: the length of the linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));


	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (head)
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	return (*head);
}
