#include <stdio.h>
/**
 * main - program that prints sum of multiples of 3,5,6 and 9 below 1024
 * Return: Always 0
 */

int main(void)
{
int limit = 1024;
int sum = 0;
int i;

for (int i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}

printf("Sum of multiples of 3 or 5 below 1024: %d\n", sum);
return (0);
}
