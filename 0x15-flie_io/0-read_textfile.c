#include "main.h"

/**
 * read_textfile - reads a file and prints it to the standard output
 * @filename: the name of the file to open
 * @letters: the number of letters to print
 * Return: the number of printed letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f_open, f_read, f_write, f_close;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (-1);

	f_open = open(filename, O_RDONLY);
	if (f_open == -1)
	{
		free(buffer);
		return (0);
	}

	f_read = read(f_open, buffer, letters);
	if (f_read == -1)
	{
		free(buffer);
		return (0);
	}

	f_write = write(STDOUT_FILENO, buffer, f_read);
	if (f_write == -1)
	{
		free(buffer);
		return (0);
	}

	f_close = close(f_open);
	if (f_close == -1)
		return (0);

	free(buffer);
	return (f_read);
}

