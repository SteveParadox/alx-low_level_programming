#include "main.h"

/**
 * _strlen - returns the length of the inputted string
 * @s: parameter
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);		
}
