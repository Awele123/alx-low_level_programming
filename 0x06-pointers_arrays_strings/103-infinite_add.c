#include "main.h"

/**
 * rev_string -function to reverse array
 * @n: integer
 * Return: 0
 */

void rev_string(char *n)
{
	int b = 0;
	int c = 0;
	char temp;

	while (*(n + b) != '\0')
	{
		b++;
	}
	b--;

	for (c = 0; c < b; c++, b--)
	{
		temp = *(n + c);
		*(n + c) = *(n + b);
		*(n + b) = temp;
	}
}

/**
 * infinite_add - function that adds numbers together
 * @n1: text representation
 * @n2: text representation
 * @r: pointer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, b = 0, c = 0, dig = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + c) != '\0')
		c++;
	b--;
	c--;
	if (c >= size_r || b >= size_r)
		return (0);
	while (c >= 0 || b >= 0 || overflow == 1)
	{
		if (b < 0)
			val1 = 0;
		else
			val1 = *(n1 + b) - '0';
		if (c < 0)
			val2 = 0;
		else
			val2 = *(n2 + c) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (temp_tot % 10) + '0';
		dig++;
		c--;
		b--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	rev_string(r);
	return (r);
}
