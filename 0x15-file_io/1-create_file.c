#include "main.h"

/**
 * create_file - Creates a function that creates a file
 * @filename: The name of the file created
 * @text_content: Contents of the file
 *
 * Return: 1 if successful and -1 if not.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int letters;
	int rw;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		;
	rw = write(file_desc, text_content, letters);
	if (rw == -1)
		return (-1);

	close(file_desc);

	return (1);
}
