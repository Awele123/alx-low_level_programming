#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -returns a pointer
 * @str: char
 * Return: result
 */

char *_strdup(char *str)
{
	char *win;
	int y, j;

	y = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	while (str[y] != '\0')
		y++;
	win = malloc(sizeof(char) * (y + 1));
	if (win == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		win[j] = str[j];
	win[j] = '\0';

	return (win);
}
