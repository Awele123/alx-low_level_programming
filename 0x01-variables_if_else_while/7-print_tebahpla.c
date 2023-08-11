#include <stdio.h>

/**
 * main - A program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char e;

for (e = 'z'; e >= 'a'; e--)
{
putchar(e);
}
putchar('\n');
return (0);
}
