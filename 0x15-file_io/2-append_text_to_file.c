#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name of the file
 * @text_content: added content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int letters;
	int rw;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rw = write(file_desc, text_content, letters);

		if (rw == -1)
			return (-1);
	}

	close(file_desc);

	return (1);
}
