#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */

char *_strdup(char *str)

{
	char *cpy;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}
	len++;

	cpy = malloc(sizeof(char) * len);

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}

	cpy[len] = '\0';

	return (cpy);
}

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * This function prints the name, age, and owner of the dog.
 * If any element of the struct is NULL, it prints (nil) instead.
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog;

/* Vérifie si name ou owner sont NULL */
	if (!name || !owner)
		return (NULL);

/* Alloue de la mémoire a newdog. En cas d'echec free la mémoire */
	newdog = malloc(sizeof(dog_t));
	if (!newdog)
	{
		free(newdog);
		return (NULL);
	}

/* Alloue de la mémoire a newdog->name et newdog->owner. En cas d'echec free la mémoire */
	newdog->name = malloc(sizeof(name));
	newdog->owner = malloc(sizeof(owner));
	if (!newdog->name || !newdog->owner)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

/* copie les char de name et de owner */
	newdog->name = _strdup(name);
	newdog->owner = _strdup(owner);
	newdog->age = age;

	return (newdog);
}
