#include "main.h"

/**
 * create_file - creates a file and writes a text in it
 * @filename: the name of the file you wish to create
 * @text_content: the string to write in the file
 * Return: 1 on success and -1 on any failure
 */

int create_file(const char *filename, char *text_content)
{
	int f_open, len = 0, f_close;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	f_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (f_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		write(f_open, text_content, len);
	}

	f_close = close(f_open);
	if (f_close == -1)
		return (-1);
	return (1);
}
