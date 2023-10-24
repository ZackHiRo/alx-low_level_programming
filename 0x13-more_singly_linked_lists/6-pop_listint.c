#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the head of the list.
 * Return: Data of the deleted head node.
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0;

if (head == NULL || *head == NULL)
return 0;

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);

return data;
}

