#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[--argc]);

	return (0);
}
