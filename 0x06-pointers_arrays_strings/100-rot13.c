#include "main.h"
#include <stdio.h>

/**
 * rot13 -function that encodes a string using rot13
 * @v: pointer
 * Return: *v
 */

char *rot13(char *v)
{
	int w;
	int x;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[w] != '\0'; w++)
	{
		for (x = 0; x < 52; x++)
		{
			if (v[w] == data1[x])
			{
				v[w] = datarot[x];
				break;
			}
		}
	}
	return (v);
}
