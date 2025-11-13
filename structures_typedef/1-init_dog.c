#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog with the provided values
 * @d: pointer to struct dog to initialize
 * @name: name to set in the struct
 * @age: age to set in the struct
 * @owner: owner to set in the struct
 *
 * Description: This function initializes a struct dog with the
 * provided name, age, and owner. It does not return a value.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
	return;

d->name = name;
d->age = age;
d->owner = owner;
}
