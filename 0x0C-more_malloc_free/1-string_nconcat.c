#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 *string_nconcat - concatenates strings
 * @s1: destination
 * @s2: source
 * @n: number
 * Return: result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);
	unsigned int g = 0, h = 0;

	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;

	if (n < s2_len)
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	
	else
		s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s)
	{
		free(s);
		return (NULL);
	}

	while (g < s1_len)
	{
		s[g] = s1[g];
		g++;
	}

	while (n < s2_len && g < (s1_len + n))
		s[g++] = s2[h++];

	while (n >= s2_len && g < (s1_len + s2_len))
		s[g++] = s2[h++];

	s[g] = '\0';

	return (s);
}
