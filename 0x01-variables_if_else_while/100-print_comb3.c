#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
	{
	int g;
	int h;

	for (g = 48; g <= 56; g++)
	{
		for (h = g + 1; h <= 57; h++)
		{
			putchar(g);
			putchar(h);
			if (g == 56 && h == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}

