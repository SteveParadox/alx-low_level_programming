#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers from 1 - 100, if the number is a multiple of 3
 * print Fizz, if a multiple of 5 print Buzz and if a multiple of both FizzBuzz
 *
 * Return: Always 0 (success);
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
