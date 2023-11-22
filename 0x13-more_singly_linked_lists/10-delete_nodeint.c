#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: Pointer head for the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if successful and -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *temp;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	curr = *head;
	for (k = 0; k < index - 1 && curr != NULL; k++)
	{
		curr = curr->next;
	}

	if (curr == NULL || curr->next == NULL)
		return (-1);

	temp = curr->next;
	curr->next = temp->next;
	free(temp);

	return (1);
}
