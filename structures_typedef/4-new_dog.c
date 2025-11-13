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
	int len = 0, i;

	if (!str)
		return (NULL);

	while (str[len])
		len++;

	cpy = malloc(sizeof(char) * (len + 1)); /* +1 pour '\0' */
	if (!cpy)
		return (NULL);

	for (i = 0; i < len; i++)
		cpy[i] = str[i];

	cpy[len] = '\0';

	return (cpy);
}

/**
 * new_dog - Creates a new dog struct with given name, age, and owner.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog struct, or NULL if allocation fails.
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *newdog;

	/* Vérifie si name ou owner sont NULL */
	if (!name || !owner)
		return (NULL);

	/* Alloue de la mémoire à newdog */
	newdog = malloc(sizeof(dog_t));
	if (!newdog)
		return (NULL);

	/* Copie name et owner avec _strdup */
	newdog->name = _strdup(name);
	if (!newdog->name) /* Si échec, libère newdog */
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = _strdup(owner);
	if (!newdog->owner) /* Si échec, libère newdog->name et newdog */
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->age = age;

	return (newdog);
}
