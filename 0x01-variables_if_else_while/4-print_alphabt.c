#include <stdio.h>

/**
 * main - A  program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char d;

for (d = 'a'; d <= 'z'; d++)
if (d != 'e' && d != 'q')
putchar(d);
putchar('\n');
return (0);
}
