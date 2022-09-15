#include <stdio.h>
#include "main"

/**
 * Print_line - prints a straight line
 * @n: parameter
 * Return: Always 0
 */

void print_line(int n)
{
	while (n-- > 0)

	{
		putchar('_');
	}
	putchar('\n');
}
