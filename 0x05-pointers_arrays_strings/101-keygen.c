#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - code to generate password
 *Return: random string
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	printf("%i\n", n);
	return (0);
}
