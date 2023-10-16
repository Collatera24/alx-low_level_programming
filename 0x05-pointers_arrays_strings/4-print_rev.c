#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string
 *
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	for (a--; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
