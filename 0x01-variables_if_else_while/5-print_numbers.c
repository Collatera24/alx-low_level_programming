#include <stdio.h>
/**
 * main - print alphabets using putchar instead of char
 *
 * Return: always (0)
 *
 */
int main(void)
{
int alphabets = '0';

while (alphabets <= '9')
{
putchar(alphabets);
}
putchar('\n');
return (0);
}
