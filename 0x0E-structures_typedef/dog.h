#ifndef DOG_H
#define DOG_H

/**
* struct dog - a structure representing a dog
* @name: name of the doggo
* @age: age of the dog
* @owner: owner of the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

