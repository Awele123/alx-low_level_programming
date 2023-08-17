#include <stdio.h>

/**
 * main -Entry point of the program
 * Return: 0
 */

int main(void)
{
	unsigned long int fib[98];
	int i;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 98; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 98; i++)
	{
		printf("%lu", fib[i]);
			if (i < 97)
			{
				printf(" , ");
			}
			else
			{
				printf("\n");
			}
	}
	return (0);
}
