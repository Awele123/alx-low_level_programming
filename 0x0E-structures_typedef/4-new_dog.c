#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * _strlen - checks string length
 * @s: string
 * Return: answer
 */

int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * *_strcpy - copies string
 * @dest: pointer
 * @src: string
 * Return: result
 */
char *_strcpy(char *dest, char *src)
{
	int strlen, j;

	strlen = 0;

	while (src[strlen] != '\0')
	{
		strlen++;
	}

	while (j < strlen)
	{
		j++;
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: name of  dog
 * @age: age of  dog
 * @owner: owner of  dog
 * Return: result
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int t = 0;
	int lent, lent1;

	lent = _strlen(name);
	lent1 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (t == 0 && d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (lent1 + 1));
	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (lent + 1));
	if ((*d).owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy((*d).name, name);
	_strcpy((*d).owner, owner);
	(*d).age = age;
	(*d).name = name;

	return (d);
}
