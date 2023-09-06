#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number
 * @argc: arguments
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int digit, a, answer;
	int coins[] = {25, 10, 5, 2, 1};

	while (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	answer = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && digit >= 0; a++)
	{
		while (digit >= coins[a])
		{
			answer++;
			digit -= coins[a];
		}
	}

	printf("%d\n", answer);
	return (0);
}
