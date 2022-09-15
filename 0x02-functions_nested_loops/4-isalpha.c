#include "main.h"

/**
 * main - Entry Point 
 *
 * Return: 1 if true 0 if false
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <=90)) || ((c >= 97) && (c < 123)))
	{
		return (1);
	}
	return (0);
}
