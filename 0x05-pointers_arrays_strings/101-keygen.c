#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;

	printf("length; ");

	int length;

	scanf("%d", &length);

	if (length <= 0)
	{
		printf("Password length must be >= 1!");
		return (1);
	}

	char *password = malloc(length + 1);

	char *digits = "012345";
	int digits_length = strlen(digits);

	char *lowers = "abcdef";
	int lowers_length = strlen(lowers);

	char *uppers = "ABCDEF";
	int uppers_length = strlen(uppers);

	char *symbols = "!@#$%";
	int symbols_length = strlen(symbols);

	srand(time(NULL) * getpid ());

	for (b = 0 ; b < length ; b++)
	{
		int char_type = rand() % 4;

		if (char_type == 0)
			password[b] = digits[rand() % digits_length];
		else if (char_type == 1)
			password[b] = lowers[rand() % lowers_length];
		else if (char_type == 2)
			password[b] = uppers[rand() % uppers_length];
		else
			password[b] = symbols[rand () % symbols_length];
	}
	password[length] = '\0';
	printf("Password: %s\n", password);

	free(password);
}
