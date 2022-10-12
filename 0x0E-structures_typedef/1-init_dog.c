#include "dog.h"
#include <stddef.h>
/**
 *init_dog - holds the variable in struct dog'
 *
 *@d: This a pointer to the stuct dog.
 *@name: name of dog.
 *@age: age of dog.
 *@owner: name of owner of dog.
 *
 *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
