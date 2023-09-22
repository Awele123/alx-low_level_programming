#include <stdlib.h>
#include "lists.h"

/**
 * free_list -function that frees a list_t list
 * @head: pointer to node A
 * Return: void
 */

void free_list(list_t *head)
{
	list_t*pseudo = head->next;

	if (head)
	{
		pseudo = head->next;
		free(head);
		head = pseudo;
	}
}
