#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - funtction adds a new node at start of listint_t list
 * @head: pointer of first node
 * @n: changes to be added
 * Return: result
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *g;
	
	g = malloc(sizeof(listint_t));

	while (!g)
		return (NULL);
	{
		g->n = n;
		g->next = *head;
		*head = g;
	}
		return (g);
}
