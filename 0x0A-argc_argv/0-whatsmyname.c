#include <stdio.h>

/**
 * main - prints its name and followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array that contains the command line arg
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

