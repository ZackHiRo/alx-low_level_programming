#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to the head of the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *next;
size_t size = 0;
current = *h;

while (current)
{
size++;
next = current->next;
free(current);

/* Check if next pointer is already freed */
if (next <= current)
{
*h = NULL;
return (size);
}
current = next;
}
*h = NULL;
return (size);
}

