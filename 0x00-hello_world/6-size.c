#include <stdio.h>
/**
 * main - to print the size of various data types
 *
 * Return: always (0)
 *
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %lu byte(s)\ln", sizeof(a));
printf("Size of an int: %lu byte(s)\ln", sizeof(b));
printf("Size of a long int: %lu byte(s)\ln", sizeof(c));
printf("Size of a long long int: %lu byte(s)\ln", sizeof(d));
printf("Size of a float: %lu byte(s)\ln", sizeof(e));
return (0);
}
