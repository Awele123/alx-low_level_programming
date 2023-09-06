#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * count_word -count the number of words in a string
 * @s: string
 * Return: result
 */

int count_word(char *s)
{
	int green, a, j;

	green = 0;
	j = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			green = 0;
		else if (green == 0)
		{
			green = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - splits string
 * @str: string
 * Return: result
 */

char **strtow(char *str)
{
	char **reader, *lad;
	int b, e = 0, len1 = 0, word, f = 0, begin, stop;

	while (*(str + len1))
		len1++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	reader = (char **) malloc(sizeof(char *) * (word + 1));
	if (reader == NULL)
		return (NULL);

	for (b = 0; b <= len1; b++)
	{
		if (str[b] == ' ' || str[b] == '\0')
		{
			if (f)
			{
				stop = b;
				lad = (char *) malloc(sizeof(char) * (f + 1));
				if (lad == NULL)
					return (NULL);
				while (begin < stop)
					*lad++ = str[begin++];
				*lad = '\0';
				reader[e] = lad - f;
				e++;
				f = 0;
			}
		}
		else if (f++ == 0)
			begin = b;
	}

	reader[e] = NULL;
	free(reader);

	return (reader);
}

