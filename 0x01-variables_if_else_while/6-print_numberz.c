#include <stdio.h>

/**
 * main - A  program that prints all single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 0;
while (d < 10)
{
putchar(d + '0');
d++;
}
putchar('\n');
return (0);
}
