#include "main.h"
/**
 * _isupper - checks for uppercase of character
 *
 * @c: input character
 *
 * Return: (1) for true, while (0) false
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
