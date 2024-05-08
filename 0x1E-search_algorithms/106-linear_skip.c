#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list
 * of integers using linear skip.
 * @list: Pointer to the head of the linked list.
 * @value: Value to search for.
 *
 * Return: NULL, If the value is not present or the head of the list is NULL,
 * Otherwise, a pointer to the first node where the value is
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	/* Perform linear skip */
	if (list == NULL)
		return (NULL);

	/* Perform linear skip */
	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		/* Store the previous jump node */
		node = jump;

		/* If the express lane is available */
		if (jump->express != NULL)
		{
			/* Jump to the next express node */
		       jump = jump->express;

	printf("value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
		/* Traverse to the end of the list */
		while (jump->next != NULL)
		/* Move to the next node in the list */
		jump = jump->next;
		}
	}

printf("value found between indexes [%ld] and [%ld]\n",
	node->index, jump->index);

/* Perform a linear search, checking each */
/* node's value to find the target value */
for (; node->index < jump->index && node->n < value; node = node->next)
	printf("value checked at index [%ld] = [%d]\n", node->index, node->n);

printf("value checked at index [%ld] = [%d]\n", node->index, node->n);

return (node->n == value ? node : NULL);
}
