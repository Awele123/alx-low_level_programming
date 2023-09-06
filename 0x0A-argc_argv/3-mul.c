#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a;
	int b;
	int c;
	int stlen;
	int f;
	int integar;

	a = 0;
	b = 0;
	c = 0;
	stlen = 0;
	f = 0;
	integar = 0;

	while (s[stlen] != '\0')
		stlen++;

	while (a < stlen && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			integar = s[a] - '0';
			if (b % 2)
				integar = -integar;
			c = c * 10 + integar;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}

/**
 * main - program multiplies two numbers
 * @argc: argument count
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int answer, tab1, tab2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	tab1 = _atoi(argv[1]);
	tab2 = _atoi(argv[2]);
	answer = tab1 * tab2;

	printf("%d\n", answer);

	return (0);
}
