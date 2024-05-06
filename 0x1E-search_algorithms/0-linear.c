#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of
 * of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The size of the elements of an array
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("value checked array[%ld] = [%d]\n", i, array[i]);

		/* if the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value does not exist, return -1 */
	return (-1);
}
