#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* init_dog - initializes a dog structure
* @d: pointer to the dog structure
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/
void init_dog(dog_t *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}

