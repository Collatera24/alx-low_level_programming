#include "function_pointers.h"

/**
 * array_iterator - prints each array elements on newline
 * @array: array
 * @size: amount of elements to print
 * @action: pointer to print regular or hexa
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
