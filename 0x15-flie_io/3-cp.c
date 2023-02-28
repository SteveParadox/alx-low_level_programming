#include "main.h"

/**
 * src_error - prints an error message if source file doesn't exist
 * @filename: name of the file
 */

void src_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * des_error - prints an error if a file cannot be written to or created
 * @filename: name of the file
 */

void des_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * close_err - prints an error message if a file cannot be closed
 * @f_desc: file descriptor
 */

void close_err(int f_desc)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_desc);
	exit(100);
}

/**
 * main - copies the content of one file to another
 * @argc: number of arguments available
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_to, file_from, f_read, f_write, f_close;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[b_size];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		src_error(argv[1]);
	if (argv[2] == NULL)
		des_error(argv[2]);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		src_error(argv[1]);
	file_to = open(argv[2], O_RDONLY | O_WRONLY, O_TRUNC, mode);
	if (file_to == -1)
		des_error(argv[2]);
	f_read = read(file_from, buff, b_size);
	if (f_read == -1)
		src_error(argv[1]);
	while (f_read > 0)
	{
		f_write = write(file_to, buff, f_read);
		if (f_read != f_write)
			des_error(argv[2]);
		f_read = read(file_from, buff, b_size);
		if (f_read == -1)
			src_error(argv[1]);
	}
	f_close = close(file_from);
	if (f_close == -1)
		close_err(file_from);
	f_close = close(file_to);
	if (f_close == -1)
		close_err(file_to);
	return (0);
}
