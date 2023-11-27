#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to the
 * POSIX standard output
 * @filename: File to be read
 * @letters: Number of letters be read and printed
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t len_read, len_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	len_read = read(file_desc, buffer, letters);
	close(file_desc);
	if (len_read == -1)
	{
		free(buffer);
		return (0);
	}
	len_write = write(STDOUT_FILENO, buffer, len_read);
	free(buffer);
	if (len_read != len_write)
		return (0);
	return (len_write);
}
