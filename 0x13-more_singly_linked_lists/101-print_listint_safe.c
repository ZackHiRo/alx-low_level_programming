#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the linked list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;
listint_t *nodes[1024];

while (current != NULL)
{
size_t i;
for (i = 0; i < count; ++i)
{
if (current == nodes[i])
{
printf("[%p] %d\n", (void *)current, current->n);
printf("-> [%p] %d\n", (void *)current, current->n);
return (count);
}
}

nodes[count] = current;
++count;

printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
}

return (count);
}

