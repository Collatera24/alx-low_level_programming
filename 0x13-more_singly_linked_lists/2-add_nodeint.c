#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 *
 * @head: Head pointer
 * @n: New integer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	if (head == NULL)
		return (NULL);

	new_element = malloc(sizeof(listint_t));
	if (new_element == NULL)
		return (NULL);
	if (*head == NULL)
		new_element->next = NULL;
	else
		new_element->next = *head;
	new_element->n = n;
	*head = new_element;

	return (*head);
}
