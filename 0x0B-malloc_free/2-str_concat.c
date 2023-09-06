#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	int d, i;
	char *slent;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = d = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[d] != '\0')
		d++;
	slent = malloc(sizeof(char) * (i + d + 1));
	if (slent == NULL)
		return (NULL);
	i = d = 0;
	while (s1[i] != '\0')
	{
		slent[i] = s1[i];
		i++;
	}
	while (s2[d] != '\0')
	{
		slent[i] = s2[d];
		i++, d++;
	}
	slent[i] = '\0';
	return (slent);

	free(slent);

	return (0);
}
