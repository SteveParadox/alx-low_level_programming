#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * @h: function parameter
 * @m: function parameter
 *
 * Return: void
 */

void hr_and_min_less_than_10(int h, int m);
void hr10_less_min10_greater(int h, int m);
void hr10_greater_min10_less(int h, int m);
void hr10_greater_min10_greater(int h, int m);

void jack_bauer(void)
{
	int h = 0, m;

	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			if ((m < 10) && (h < 10))
				hr_and_min_less_than_10(h, m);
			else if ((m >= 10) && (h < 10))
			{
				hr10_less_min10_greater(h, m);
			}
			else if ((m < 10) && (h >= 10))
			{
				hr10_greater_min10_less(h, m);
			}
			else
			{
				hr10_greater_min10_greater(h, m);
			}
			m++;
			_putchar('\n');
		}
		h++;
	}
}

/**
 * hr10_greater_min10_greater - prints values >= 10 hours and >= 10 minutes
 * @h: function parameter
 * @m: function parameter
 *
 * Return: void
 */

void hr10_greater_min10_greater(int h, int m)
{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
}

/**
 * hr10_greater_min10_less - prints values >= 10 hours and < 10 minutes
 * @h: function parameter
 * @m: function parameter
 *
 * Return: void
 */

void hr10_greater_min10_less(int h, int m)
{
	_putchar('0' + h / 10);
	_putchar('0' + h % 10);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m);
}

/**
 * hr10_less_min10_greater - prints values < 10 hours and >= 10 minutes
 * @h: function parameter
 * @m: function parameter
 *
 * Return: void
 */

void hr10_less_min10_greater(int h, int m)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + m / 10);
	_putchar('0' + m % 10);
}

/**
 * hr_and_min_less_than_10 - prints values < 10 hours and < 10 minutes
 * @h: function parameter
 * @m: function parameter
 *
 * Return: void
 */

void hr_and_min_less_than_10(int h, int m)
{
	_putchar('0' + 0);
	_putchar('0' + h);
	_putchar(':');
	_putchar('0' + 0);
	_putchar('0' + m);
}
