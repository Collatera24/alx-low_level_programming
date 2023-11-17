#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Ptr to the head of the linked list.
 *
 * Return: Num of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);

	for (a = 1; h->next != NULL; a++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	printf("[%u] %s\n", h->len, h->str);
	return (a);
}
