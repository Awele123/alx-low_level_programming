#include <stdlib.h>
#include "lists.h"

/**
 * list_len -prints the number of elements in list_t
 * @h: pointer
 * Return: num of elem
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	for (num = 0; h; h = h->next)
	{
		num++;
	}
	return (num);
}
