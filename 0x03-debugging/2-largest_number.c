#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
	if ((a > b) && (b > c))
	{
		largest = a;
	}
	else if ((b > a) && (a > c))
	{
=======
	if (a >= b && a >= c)
		{
		largest = a;
		}
	else if (b >= a && b >= c)
		{
>>>>>>> df030e6607102ea620c4a19c6ad2bee50e5b9585
		largest = b;
		}
	else
		{
		largest = c;
<<<<<<< HEAD
	}
=======
		}
>>>>>>> df030e6607102ea620c4a19c6ad2bee50e5b9585

	return (largest);
}
