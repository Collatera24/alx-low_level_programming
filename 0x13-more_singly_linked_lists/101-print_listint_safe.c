#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: First pointer
 *
 * Return: Number of nodes in the list
 *
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t count = 0;

	s = f = head;

	while (s != NULL && f != NULL && f->next != NULL)
	{
		printf("[%p] %d\n", (void *)s, s->n);
		count++;

		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			printf("Linked list has a loop\n");
			exit(98);
		}
	}

	return (count);
}
