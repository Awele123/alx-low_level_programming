#include "lists.h"

/**
 * pop_listint - function deletes node 1 in listint_t list
 * @head: pointer to the first node
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *g;
	int a;

	if (!head && !*head)
		return (0);

	a = (*head)->n;
	g = (*head)->next;
	free(*head);
	*head = g;

	return (a);
}
