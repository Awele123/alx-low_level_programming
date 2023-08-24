#include "main.h"
#include <stdio.h>

/**
 * print_buffer -function that prints a buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int a, e, s;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		s = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (e = 0; e < 10; e++)
		{
			if (e < s)
				printf("%02x", *(b + a + e));
			else
				printf("  ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (e = 0; e < s; e++)
		{
			int c = *(b + a + e);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		a += 10;
	}
}
