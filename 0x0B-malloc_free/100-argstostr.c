#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr -concatenates arguments
 * @av: pointer
 * @ac: index
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (b = 0; b < ac; b++)
	{
		if (av[b] != NULL)
		{
			while (av[b][d] != '\0')
			{
				d++;
			}
			d++;
		}
	}
	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		if (av[a] != NULL)
		{
			while (av[a][b] != '\0')
			{
				str[c++] = av[a][b++];
			}
			str[c] = '\0';
		}
		str[c++] = '\n';
	}
	return (str);
}
