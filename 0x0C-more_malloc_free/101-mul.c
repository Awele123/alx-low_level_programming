#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"


/**
 * is_digit - checks string
 * @s: string
 * Return: result
 */

int is_digit(char *s)
{
	int x = 0;

	for (x = 0; s[x]; x++)
		if (s[x] < '0' || s[x] > '9')
			return (0);
	x++;
	return (1);
}


/**
 * _strlen - checks length of a string
 * @s: string
 * Return: result
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int s1_lent, s2_lent, lent, x, mul, num1, num2, *answer, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	s1_lent = _strlen(s1);
	s2_lent = _strlen(s2);
	lent = s1_lent + s2_lent + 1;
	answer = malloc(sizeof(int) * lent);
	if (!answer)
		return (1);
	for (x = 0; x <= s1_lent + s2_lent; x++)
		answer[x] = 0;
	for (s1_lent = s1_lent - 1; s1_lent >= 0; s1_lent--)
	{
		num1 = s1[s1_lent] - '0';
		mul = 0;
		for (s2_lent = _strlen(s2) - 1; s2_lent >= 0; s2_lent--)
		{
			num2 = s2[s2_lent] - '0';
			mul += answer[s1_lent + s2_lent + 1] + (num1 * num2);
			answer[s1_lent + s2_lent + 1] = mul % 10;
			mul /= 10;
		}
		if (mul > 0)
			answer[s1_lent + s2_lent + 1] += mul;
	}
	for (x = 0; x < lent - 1; x++)
	{
		if (answer[x])
			b = 1;
		if (b)
			_putchar(answer[x] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(answer);
	return (0);
}
