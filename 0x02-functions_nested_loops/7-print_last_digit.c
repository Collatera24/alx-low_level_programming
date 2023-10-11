#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to deduce the last digit from
 * Return: value of the last digit of the number
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	if (a < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
}
