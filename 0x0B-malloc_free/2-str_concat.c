#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}

	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < a; i++)
	{
		ptr[i] = s[i];
	}
	for (j = 0; j <= b; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
