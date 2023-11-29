#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* 0-print_name.c */
void print_name(char *name, void (*f)(char *));

/* 1-array_iterator.c */
void array_iterator(int *array, size_t size, void (*action)(int));

/* 2-int_index.c */
int int_index(int *array, int size, int (*cmp)(int));

/**
 * enum bool - Enumeration type for representing boolean values
 * @TRUE: Represents the boolean value true, which is equivalent to 1
 * @FALSE: Represents the boolean value false, which is equivalent to 0
*/
typedef enum bool
{
TRUE = 1,
FALSE = 0
} bool;

#endif /* FUNCTION_POINTERS_H */

