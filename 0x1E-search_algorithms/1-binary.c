#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: Pointer to the first element of array
 * @size: Size of elements in the array
 * @value: Value to search for
 *
 * Return: -1, if the value is not present or the array is NULL,
 * Otherwise, the index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate the middle index */
		i = left + (right - left) / 2;

		/* If the middle element is the value */
		if (array[i] == value)
			/* Return the index */
			return (i);

		/* If the middle element is > the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}
	/* Value does not exist, return -1 */
	return (-1);
}
