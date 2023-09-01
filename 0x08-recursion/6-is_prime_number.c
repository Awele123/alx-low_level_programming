#include "main.h"
#include <stdio.h>

int check_prime_number(int n, int o);
/**
 * is_prime_number -  returns prime number
 * @n: number
 * Return: value
 */

int is_prime_number(int n)
{
	return (check_prime_number(n, 1));
}
/**
 * check_prime_number -check for prime number
 * @n: number
 * @o: index
 * Return: 1 and 0
 */

int check_prime_number(int n, int o)
{
	if (n <= 1)
		return (0);
	if (n % o == 0 && o > 1)
		return (0);
	if ((n / o) < o)
	{
		return (1);
	}
	else
		return (check_prime_number(n, o + 1));
}

