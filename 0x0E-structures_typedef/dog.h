#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dog - a structure for a dog
 * @name: name of the dog
 * @owner: the name of the owner
 * @age: the age of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
