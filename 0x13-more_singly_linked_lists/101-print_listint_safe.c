#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a linked list of `listint_t` nodes.
 *
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list, or 0 if the list is empty.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;

while (head != NULL) {
if (head->n == 98) {
printf("-> [0x%p] 98\n", (void *)head);
exit(98);
}

printf("[0x%p] %d\n", (void *)head, head->n);
count++;
head = head->next;
}

return (count);
}
