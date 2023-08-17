#include <stdio.h>

/**
 * main -entry code
 * Return: 0;
 */

int main(void)
{
	int b;

	for (b = 1 ; b <= 100 ; b++)
	{
		if ((b % 3 == 0) && (b % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (b % 3 == 0)
			printf("%s", "Fizz");
		else if (b % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", b);
		if (b != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

