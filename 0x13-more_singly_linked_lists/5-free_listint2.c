#include "lists.h"

/**
 * free_listint2 - function that frees listint_t list
 * @head: pointer to node 1 
 */

void free_listint2(listint_t **head)
{
	listint_t *g;

	if (!head)
		return;
       while (*head)
	{
		g = (*head)->next;
		free(*head);
		*head = g;
	}

	*head = NULL;
}
