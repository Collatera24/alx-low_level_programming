#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: Head pointer of the list
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
