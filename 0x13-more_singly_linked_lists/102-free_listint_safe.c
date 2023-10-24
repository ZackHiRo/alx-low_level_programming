#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: Pointer to a pointer to the first node of the list.
 * Return: Number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *temp = NULL;
size_t node_count = 0;

while (current != NULL)
{
node_count++;

if (current >= current->next)
{
temp = current->next;
free(current);
break;
}

temp = current->next;
free(current);
current = temp;
}

*h = NULL;
return (node_count);
}

