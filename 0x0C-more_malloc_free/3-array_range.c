#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: int pointer to the allocated memory
 */

int *array_range(int min, int max)
{
	int i, len;
	int *a;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
