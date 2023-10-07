#include <stdio.h>
/**
 * main - to print the alphabet in lowercase, followed by a new line
 *
 * Return: always (0)
 *
 * */
int main(void)
{
	char i;

	i = 'a';
	
	while (i <= 'z')
        {
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
