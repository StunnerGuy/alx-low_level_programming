#include "main.h"

/**
 * print_last_digit - Print and return the last digit of a number
 *
 * @n: Takes number input
 *
 * Return: lastDigit
 */

int print_last_digit(int n)
{
	int lastDigit;

		if (n < 0)
			lastDigit = -1 * (n % 10);

	else
		lastDigit = n % 10;

	_putchar(lastDigit + 48);

	return (lastDigit);
}
