#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in listint_t list
 * @head: pointer to first node
 * @index: nodr indec
 * Return: result
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;
	listint_t *g = head;

	if (g || l < index)
	{
		g = g->next;
		l++;
	}
	return (g);
}
