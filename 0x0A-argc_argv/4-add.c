#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks for numbers in string
 * @str: pointer
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int calculate;

	calculate = 0;
	while (calculate < strlen(str)) /*count string*/

	{
		if (!isdigit(str[calculate])) /*check if str there are digit*/
		{
			return (0);
		}

		calculate++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Argument count
 * @argv: Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int calculate;
	int str_ofint;
	int sum = 0;

	calculate = 1;
	while (calculate < argc) /*Go through entire array*/
	{
		if (check_num(argv[calculate]))

		{
			str_ofint = atoi(argv[calculate]); /*ATOI --> convert string to int*/
			sum += str_ofint;
		}

		/*Condition if at least one number contains symbols and not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		calculate++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
