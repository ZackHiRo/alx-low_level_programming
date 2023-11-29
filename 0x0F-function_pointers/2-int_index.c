#include <stddef.h>

/**
* int_index - searches for an integer in an array using a comparison function
* @array: pointer to the array
* @size: number of elements in the array
* @cmp: pointer to the comparison function
*
* Return: index of the first element for which cmp does not return 0,
*         -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}

