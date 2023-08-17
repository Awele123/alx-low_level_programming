#include <stdio.h>
/**
 * main -program finds and prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	int fib1 = 1, fib2 = 2, fib3;
	int sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%d\n", sum);
	return (0);
}
