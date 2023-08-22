#include "main.h"

/**
 * swap_int -function that swaps the values of two integers a and b
 * @a: integar to be swapped
 * @b: integar  to be swapped
 */

void swap_int(int *a, int *b)
{
	int p = *a;

	 *a = *b;
	 *b = p;
}
