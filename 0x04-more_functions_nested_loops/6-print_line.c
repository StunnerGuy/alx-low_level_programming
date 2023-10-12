#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)

	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
