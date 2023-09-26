#include "lists.h"

/**
 * sum_listint - returns sum of all the data in a listint_t list
 * @head: pointer to first node
 * Return: result
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *g = head;

	while (g != NULL)
	{
		add += g->n;
		g = g->next;
	}
		return (add);
}
