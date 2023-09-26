#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: list
 * Return: element number
 */

size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	for (t = 0; h; h = h->next)
	{
		t++;
	}
	return (t);
}
