#include <stdio.h>
#include "dog.h"

/**
 *new_dog - holds information of a dog
 * 
 * @name: name of dog.
 *@age: age of dog
 *@owner: name of owner of dog.
 *
 *Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	(*dog_t).name = *name;
	(*dog_t).age = age;
	(*dog_t).owner = *owner;
}
