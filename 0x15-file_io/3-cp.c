#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point of the program.
 * @program_name: Name of the program
 *
 * Return: Exit code.
 */

void display_usage(char *program_name);
int open_src_file(char *filename);
int open_dest_file(char *filename);
void copy_file_content(int fd_from, int fd_to);
void print_err(char *message, char *filename, int fd_from, int fd_to);

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		display_usage(argv[0]);
		exit(97);
	}

	fd_from = open_src_file(argv[1]);
	fd_to = open_dest_file(argv[2]);

	copy_file_content(fd_from, fd_to);

	close(fd_from);
	close(fd_to);

	return (0);
}

/**
 * display_usage - Displays the correct usage of the program.
 * @program_name: The name of the program.
 */

void display_usage(char *program_name)
{
	dprintf(2, "Usage: %s file_from file_to\n", program_name);
}

/**
 * open_src_file - Opens the source file for reading.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor of the opened source file.
 */

int open_src_file(char *filename)
{
	int fd_from = open(filename, O_RDONLY);

	if (fd_from == -1)
	{
		print_err("Error: Can't read from file", filename, -1, -1);
	}
	return (fd_from);
}

/**
 * open_dest_file - Opens the destination file for writing.
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor of the opened destination file.
 */

int open_dest_file(char *filename)
{
	int fd_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		print_err("Error: Can't write to", filename, -1, -1);
	}
	return (fd_to);
}

/**
 * copy_file_content - Copies the content from source file to destination file.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */

void copy_file_content(int fd_from, int fd_to)
{
	ssize_t read_bytes, write_bytes;
	char buffer[BUFFER_SIZE];

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			print_err("Error: Can't write to", "", fd_from, fd_to);
		}
	}
	if (read_bytes == -1)
	{
		print_err("Error: Can't read from file", "", fd_from, fd_to);
	}
}


/**
 * print_err - Prints errors, displays error message,exits program.
 * @message: The error message.
 * @filename: The relevant filename.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 */

void print_err(char *message, char *filename, int fd_from, int fd_to)

{
	dprintf(2, "%s %s\n", message, filename);
	if (fd_from != -1)
		close(fd_from);
	if (fd_to != -1)
		close(fd_to);
	exit(99);
}
