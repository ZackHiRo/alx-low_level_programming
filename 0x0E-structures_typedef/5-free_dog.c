#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees memory allocated for a dog structure
* @d: pointer to the dog structure
*/
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}

