#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog structure
 * Assumes that the 'name' and 'owner' fields of the dog_t structure
 * are dynamically allocated.
 * @d: pointer to dog structure to free
 */

void free_dog(dog_t *d)

{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
