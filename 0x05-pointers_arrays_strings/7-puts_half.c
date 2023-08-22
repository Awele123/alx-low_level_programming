#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line
 * @str: string
 * * Return: half of input
 */
void puts_half(char *str)
{
	int c, d, longe;

	longe = 0;

	for (c = 0; str[c] != '\0'; c++)
		longe++;

	d = (longe / 2);

	if ((longe % 2) == 1)
		d = ((longe + 1) / 2);

	for (c = d; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}




