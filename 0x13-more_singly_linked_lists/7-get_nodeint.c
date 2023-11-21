#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: The first pointer
 * @index: Node desired position
 *
 * Return: Pointer to the retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
