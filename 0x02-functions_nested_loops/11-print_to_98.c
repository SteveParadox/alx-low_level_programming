#include "main.h"

/**
 * print_to_98 - prints numbers from the initial value to 98
 *
 * @n: function parameter
 *
 * Return: void
 */

void negative(int n);
void greater_than_98(int n);
void starts_from_0(int n);

void print_to_98(int n)
{
	if ((n >= 0) && (n <= 98))
	{
		starts_from_0(n);
	}
	else if (n > 98)
	{
		greater_than_98(n);
	}
	else
	{
		negative(n);
	}

	_putchar('\n');
}

/**
 * starts_from_0 - prints from 0 to 98
 * @n: function parameter
 *
 * Return: void
 */

void starts_from_0(int n)
{
	for (n = n ; n <= 98 ; n++)
	{
		if (n < 10)
		{
			_putchar('0' + n);
		}
		else
		{
			/*prints the first number*/
			_putchar('0' + n / 10);
			/*prints the second number*/
			_putchar('0' + n % 10);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * greater_than_98 - prints numbers from n to 98 where n > 98
 * @n: funtion parameter
 *
 * Return: void
 */

void greater_than_98(int n)
{
	for (n = n ; n >= 98 ; n--)
	{
		/*checks if n > 100*/
		if (n >= 100)
		{
			/*get the remainder of n / 100*/
			int h = n % 100;

			/*prints the first number*/
			_putchar('0' + n / 100);
			/*prints the second number*/
			_putchar('0' + h / 10);
			/*prints the last number*/
			_putchar('0' + h % 10);
		}
		else
		{
			/*prints the first number*/
			_putchar('0' + n / 10);
			/*prints the second number*/
			_putchar('0' + n % 10);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * negative - prints from n to 98 where n is < 0
 * @n: function parameter
 *
 * Return: void
 */

void negative(int n)
{
	for (n = n ; n <= 98 ; n++)
	{
		 /*checks if n is between 0 and -9*/
		if ((n < 0) && (n > -10))
		{
			_putchar('-');
			 _putchar('0' + n * -1);
		}
		else if (n <= -10)
		{
			if (n > -100)
			{
				_putchar('-');
				_putchar('0' + (n * -1) / 10);
				_putchar('0' + (n * -1) % 10);
			}
			else
			{
				int h = n % 100;

				_putchar('-');
				_putchar('0' + (n * -1) / 100);
				_putchar('0' + (h * -1) / 10);
				_putchar('0' + (h * -1) % 10);
			}
		}
		else if (n >= 10)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('0' + n);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
