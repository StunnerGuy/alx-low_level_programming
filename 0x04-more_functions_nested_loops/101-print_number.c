#include <stdio.h>
#include "main.h"

/**
 * print_number - prints a number
 * @n: The number to print
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	else if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
