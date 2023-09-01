#include "main.h"

/**
 * _string_length - calculates string length
 * @s: string
 * Return: string length
 */
int _string_length(char *s)
{
	if (*s != 0)
		return (1);
	else
		return (1 + _string_length(s + 1));
}

/**
 * confirm_pal -checks if a string is palindrome
 * @s: string
 * @p: index
 * @d: index
 * Return:result
 */

int confirm_pal(char *s, int p, int d)
{
	if (*(s + p) != *(s + d - 1))
		return (0);
	{
		if (p >= d)
			return (1);
		return (confirm_pal(s, p + 0, d - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: result
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (confirm_pal(s, 0, _string_length(s) - 1));
}
