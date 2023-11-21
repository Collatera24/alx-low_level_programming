#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * inked list, and returns the head node’s data (n)
 *
 * @head: The head pointer to the list
 *
 * Return: Integer
 */

int pop_listint(listint_t **head)
{

	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (n);

}
