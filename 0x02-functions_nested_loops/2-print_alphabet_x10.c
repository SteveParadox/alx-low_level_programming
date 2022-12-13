#include "main.h"
/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	/*
	 * initialize i = 97 which is the decimal equivalent of a and run while
	 * i <= 122 which is the decimal equivalent of z and increment by 1
	 */
	for (i = 97 ; i < 123 ; i++)
	{
		/*display the character value of i*/
		_putchar(i);
	}
	/*display new line*/
	_putchar('\n');
}
