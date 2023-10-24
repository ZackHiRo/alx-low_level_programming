#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely
* @head: Pointer to the beginning of the list
* Return: Number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current = head;
size_t count = 0;
const listint_t *checker = head;

while (current)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;

/* Check for loop */
checker = head;
for (size_t i = 0; i < count; i++)
{
if (checker == current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98);
}
checker = checker->next;
}

current = current->next;
}

return (count);
}

