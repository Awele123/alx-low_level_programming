#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 * @name: string
 * @f: function pointer
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	while (name == NULL || f == NULL)
		return;

	f(name);
}
