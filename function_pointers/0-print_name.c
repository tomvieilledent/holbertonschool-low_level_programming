#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - affiche un nom en utilisant une fonction passée en paramètre
 * @name: le nom à afficher
 * @f: pointeur vers une fonction qui prend un char* en paramètre
 *
 * Retour: Rien.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
