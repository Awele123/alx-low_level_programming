#include "lists.h"
#include <stdio.h>

/**
 * free_listint - function that frees a listint_t list.
 * @head: head ointer ti be freed
 */

void free_listint(listint_t *head)
{
	listint_t *g;

	if (head)
	{
		g = head->next;
		head = g;
		free(head);
		while (!head)
			free(head);
	}
}
