#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{

int b;
char j;
b = 0;

while (b < 10)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
b++;
}

}


