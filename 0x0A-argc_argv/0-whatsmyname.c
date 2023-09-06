#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name
 * @argc: argument couny
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
	printf("%s\n", *argv);
	}
	return (0);
}
