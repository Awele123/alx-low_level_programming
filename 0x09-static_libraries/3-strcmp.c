#include "main.h"
/**
 * _strcmp - function that compares string values
 * @s1: value 1
 * @s2: value 2
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int q;

	q = 0;
	while (s1[q] != '\0' && s2[q] != '\0')
	{
		if (s1[q] != s2[q])
		{
			return (s1[q] - s2[q]);
		}
		q++;
	}
	return (0);
}
