#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		if (i < MAX_STRING_LENGTH - 1)
		{
		dest[i] = src[j];
		i++;

		}

		j++;
	}
	dest[i] = '\0';
	return (dest);
}
