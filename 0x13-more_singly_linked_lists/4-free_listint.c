#include "lists.h"

/**
 * free_listint - function that frees listint_t list
 * @head: pointer to node 1
 */

void free_listint(listint_t *head)
{
	listint_t *g;

	if (head)
	{
		g = (head)->next;
		free(head);
		head = g;
	}
}
