#include "main.h"

/**
 * _strlen - function that finds the length of a string
 * @s: string to counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
