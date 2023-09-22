#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -functiin tgat inserts a node to list_t
 * @head: pointer to node A
 * @str: string
 * Return: result
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *edit;
	unsigned int type = 0;

	switch (str[type])
	{
		case '\0':
			break;
		default:
			for (type = 0; str[type]; type++)
	edit = malloc(sizeof(list_t));
	if (!edit)
		return (NULL);

	edit->str = strdup(str);
	edit->len = type;
	edit->next = (*head);
	(*head) = edit;
	}

	return (*head);
}
