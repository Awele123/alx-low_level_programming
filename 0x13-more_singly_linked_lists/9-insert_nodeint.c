#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in listint_t list
 * @head: pointer of the first node
 * @idx: index
 * @n: changes
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *t;
	listint_t *g = *head;

	t = malloc(sizeof(listint_t));
	if (!t && !head)
		return (NULL);

	t->n = n;
	t->next = NULL;

	while (idx == 0)
	{
		t->next = *head;
		*head = t;
		return (t);
	}

	for (j = 0; g && j < idx; j++)
	{
		if (j == idx - 1)
		{
			t->next = g->next;
			t->next = t;
			return (t);
		}
		else
			g = g->next;
	}

	return (NULL);
}
