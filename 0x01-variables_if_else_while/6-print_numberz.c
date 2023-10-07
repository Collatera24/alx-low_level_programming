#include <stdio.h>
/**
 * main - print numbers using putchar instead of char
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
