#include "main.h"

/**
 * puts2 - prints character of a string
 * @str: 1st input
 * Return: result
 */

void puts2(char *str)
{
	int longb = 0;
	int g = 0;
	char *o = str;
	int h;

	while (*o != '\0')
	{
		o++;
		longb++;
	}
	g = longb - 1;
	for (h = 0 ; h <= g ; h++)
	{
		if (h % 2 == 0)
		{
			_putchar(str[h]);
		}
	}
	_putchar('\n');
}
