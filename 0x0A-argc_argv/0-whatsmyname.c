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
	printf("%s\n", *argv);

	return (0);
}
