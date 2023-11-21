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
	listint_t *new_element = (listint_t *)malloc(sizeof(listint_t));

	if (new_element == NULL)

	{
		return (NULL);
	}

	new_element->data = n;

	new_element->next = *head;

	*head = new_element;

	return (*head);
}

