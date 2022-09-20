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
	srand(time(0));
			int n = rand();
			printf("%i\n", n);
			return (0);
			}
