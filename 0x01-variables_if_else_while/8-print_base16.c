#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * using putchar function three times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int z;

for (z = 48; z < 58; z++)
putchar(z);
for (z = 97; z < 103; z++)
putchar(z);
putchar('\n');
return (0);
}
