#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dog - prints the details of a dog
* @d: pointer to the dog structure
*/
void print_dog(dog_t *d)
{
if (d == NULL)
return;

printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

