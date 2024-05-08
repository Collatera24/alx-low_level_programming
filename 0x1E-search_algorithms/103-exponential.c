#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array if int
 * using binary search
 * @array: Pointer to the first element of array
 * @left: Starting index of [sub]array to search
 * @right: Ending index of [sub]array
 * @value: Value to search for.
 *
 * Return: -1, if the value is not present or the array is NULL,
 * Otherwise, the index where the value is located.
 *
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer of the first element of the array to search
 * @size: Size of elements in the array
 * @value: Value to search for.
 *
 * Return: -1, if the value is not present or the array is NULL,
 * Otherwise, the index of the value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i =0, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);
	/* Perform exponential search if the first element is not the targetted value */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine the range where the value is expected to be found */
	right = i < size ? i : size - 1;
	printf("value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/* Perform binary search within the identified range */
	return (_binary_search(array, i / 2, right, value));
}
