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
const listint_t *slow = head, *fast = head;
size_t node_count = 0;

while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
node_count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
exit(98);
}
}

return (node_count);
}

