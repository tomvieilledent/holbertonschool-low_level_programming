#include "dog.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
d->name = name;
d->age = age;
d->owner = owner;
}
