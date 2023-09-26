#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function adds a node at the end of listint_t list
 * @head: pointer of the first element
 * @n: edits
 * Return: result
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *g = *head;

	t = malloc(sizeof(listint_t));
	while (!t)
		return (NULL);

	t->n = n;
	t->next = NULL;

	while (*head == NULL)
	{
		*head = t;
		return (t);
	}

	while (g->next)
		g = g->next;

	g->next = t;

	return (t);
}
