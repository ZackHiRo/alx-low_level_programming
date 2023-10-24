#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely.
* @head: Pointer to the first node of the list.
* Return: Number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t node_count = 0;
const listint_t *current = head;
const listint_t *loop_node = NULL;

while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
node_count++;

if (current >= current->next)
{
loop_node = current->next;
break;
}

current = current->next;
}

if (loop_node)
{
printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
exit(98);
}

return (node_count);
}

