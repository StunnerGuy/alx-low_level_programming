#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		if ((n == 2) || (n == 4))
		{
			continue;
		}
		putchar(n);
	}
}
