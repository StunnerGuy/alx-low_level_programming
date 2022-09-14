#include "main.h"

/**
 * times_table - print the 9 times table
 *
 */

void times_table(void)
{
	int
		t = 9, /* tines */
		r, /* rows */
		c, /* columns */
		m; /* multiply */

	for (r = 0; r <= t; r++)
	{
		for (c = 0; c <= t; c++)
		{
			/* multiply the row by column */
			m = r * c;

			if (m / 10) /* if a first digit exists */
				/* print the first digit */
				_putchar(48 + (m / 10));
			else if (c != 0) /* if only single digit exist */
				/* print a space */
				_putchar(' ');

			_putchar(48 + (m % 10));


			if (c != t)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
