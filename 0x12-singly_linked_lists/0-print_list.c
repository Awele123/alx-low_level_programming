#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of list_t
 * @h: pointer assigned
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	size_t task = 0;

	while (h)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		task++;
	}

	return (task);
}
