#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a list.
 * @head: Pointer to the pointer of the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *temp, *prev;
    unsigned int i = 0;

    if (*head == NULL)
        return -1;

    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return 1;
    }

    temp = *head;
    while (temp != NULL && i < index)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return -1;

    prev->next = temp->next;
    free(temp);

    return 1;
}

