#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: Pointer to head of the linked list
 * @value: Value to search for
 *
 * Return: NULL, if the value is not present or the head of the list NULL,
 * Otherwise, a pointer to the first node where the value is.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	/* Check if the list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	step = 0;

	/* Calculate the jump step size */
	step_size = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/* Store the previous jump node */
		node = jump;

		for (step += step_size; jump->index < step; jump = jump->next)
		{
			/* If reached the end of the list */
			if (jump->index + 1 == size)
				break;
		}
		printf("value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}

