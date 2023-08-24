#include "main.h"
/**
 * string_toupper - function that changes all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int b;

	b = 0;
	while (n[b] != '\0')
	{
		if (n[b] >= 97 && n[b] <= 122)
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
