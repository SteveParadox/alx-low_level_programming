#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file to append to
 * @text_content: the string to append to the file
 * Return: 1 on success and -1 on any failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_close, len = 0;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_WRONLY | O_APPEND);

	if (f_open == -1)
		return (f_open);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		write(f_open, text_content, len);
	}

	f_close = close(f_open);

	if (f_close == -1)
		return (f_close);
	return (1);
}
