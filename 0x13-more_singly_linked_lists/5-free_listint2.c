#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: Head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next_node;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}

	*head = (NULL);
}
