#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - run password generator
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

			srand(time(0));
			n = rand();
			printf("%i\n", n);
			return (0);
			}
