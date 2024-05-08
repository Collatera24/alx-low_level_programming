#include "search_algos.h"

/**
 * advanced_binary_recursive - searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the [sub]array to search
 * @left: Starting index of the [sub]array to search
 * @right: End of the [sub]array
 * @value: Value to search for
 *
 * Return: -1, If the value is not present of array is NULL,
 * Otherwise, the index where located.
 *
 * Desc: Prints the [sub]array being searched after each change.
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* If the right bound is < left bound */
	if (right < left)
		/* Return -1, when not found */
		return (-1);

	printf("searching in array: ");

	/* Print the [sub]array being searched */
	for (i = left; i < right; i++)

		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/* Calculate the mid index */
	i = left + (right - left) / 2;

	/* If the mid element is the value and it's the first occurence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		/* Return the index */
		return (i);

	/* If the middle element is >= to the value */
	if (array[i] >= value)
		/* Search left array recusively */
		return (advanced_binary_recursive(array, left, i, value));
	/* Search right array recursively */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using advanced binary search
 * @array: Pointer to the first element of the array to search
 * @size: Size of the elements in the array to search
 * @value: Value to search
 *
 * Return: -1, if the value not found or the array is NULL,
 * Otherwise, the first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Call recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
