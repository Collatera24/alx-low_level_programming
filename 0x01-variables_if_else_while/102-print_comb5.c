#include <stdio.h>
/**
 * main - print all possible different combinations of two two digits
 *
 * Return: always (0)
 *
 */
int main(void)
{
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));

			putchar(' ');

			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			putchar(',');
			putchar(' ');
		}
	}
	
	return 0;
}

