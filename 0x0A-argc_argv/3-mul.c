#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplying two arguments
 * @argc: argument counter
 * @argv: argument string
 * Return: 1 if arguments are not up to two otherwise 0
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
