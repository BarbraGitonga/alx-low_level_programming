#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - hold description a dog
 *@name: name of dog.
 *@age: age of dog.
 *@owner: name of the owner of the dog.
 *
 *Description: This structure holds information about pet dogs.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif

#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
