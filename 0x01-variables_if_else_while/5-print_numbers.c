#include <stdio.h>
/**
 * main - prints base ten number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char base_ten = '0';

	while (base_ten <= 10)
	{ 	
		putchar(base_ten);
		base_ten++;
	}

putchar('\n');

return (0);
}
