#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t linked list safely.
* @h: Pointer to the first node of the list.
* Return: Number of nodes in the list.
*/
size_t free_listint_safe(listint_t **h)
{
size_t node_count = 0;
listint_t *current = *h;
listint_t *temp;

while (current)
{
if (current >= current->next)
{
temp = current->next;
current->next = NULL;
current = temp;
node_count++;
break;
}

temp = current->next;
free(current);
current = temp;
node_count++;
}

*h = NULL;
return (node_count);
}

