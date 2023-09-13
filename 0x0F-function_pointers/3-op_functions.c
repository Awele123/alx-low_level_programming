#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - prints sum of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prints difference of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints product of two numbers.
 * @a: number 1
 * @b: number 2
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
