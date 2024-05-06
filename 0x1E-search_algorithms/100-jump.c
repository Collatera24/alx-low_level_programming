#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using jump search
 * @array: Pointer to the first element to search
 * @size: The size of elements in the array
 * @value: Value to search for.
 *
 * Return: -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step size */
	step = sqrt(size);

	/* Perform the jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		i = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within range */
	for (; i < jump && array[i] < value; i++)
		printf("value checked array[%ld] = [%d]\n", i, array[i]);

	printf("value checked array[%ld] = [%d]\n", i, array[i]);

	/* Return index if value found */
	return (-1);
}
