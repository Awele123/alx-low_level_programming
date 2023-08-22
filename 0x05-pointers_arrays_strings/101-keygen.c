#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -generates random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int d, zoom, e;

	zoom = 0;

	srand(time(NULL));

	for (d = 0; d < 100; d++)
	{
		pass[d] = rand() % 69;
		zoom += (pass[d] + '0');
		putchar(pass[d] + '0');
		if ((2772 - zoom) - '0' < 69)
		{
			e = 2772 - zoom - '0';
			zoom += e;
			putchar(e + '0');
			break;
		}
	}

	return (0);
}


