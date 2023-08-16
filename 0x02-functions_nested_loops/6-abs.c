#include "main.h"

/**
 * _abs - Function to find the absolute value of an integar
 * @a: function parameter
 * Return: -a or a
 */

int _abs(int c)

{
	if (c > 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
