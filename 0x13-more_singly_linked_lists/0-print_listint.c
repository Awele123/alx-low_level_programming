#include "lists.h"
#include <stdio.h>

/**
 * print_listint -prints all the elements of a listint_t list.
 * @h: pointer
 * Return: element count
 */

size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
	if (h->n)
	{
		printf("%d\n", h->n);
		t++;
	}
	h = h->next;
	}
	return (t);
}
