#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - inserts node at end of list_t
 * @head: pointer to node A
 * @str: string
 * Return: result
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *edit;
	list_t *psudoe = *head;
	unsigned int type = 0;

	switch (str[0])
	{
		case '\0':
			return (NULL);
		default:
	for (type = 0; str[type]; type++)

	edit = malloc(sizeof(list_t));
	if (!edit)
		return (NULL);

	edit->str = strdup(str);
	edit->len = type;
	edit->next = NULL;

	if (*head == NULL)
	{
		*head = edit;
		return (edit);
	}

	while (psudoe->next)

		psudoe = psudoe->next;

	psudoe->next = edit;
	}
	return (edit);
}
