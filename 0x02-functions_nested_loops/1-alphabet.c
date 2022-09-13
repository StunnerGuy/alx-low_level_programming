#include "main.h"

/**
 * print_alphabet - print lowercase alphabets, followed by a new line.
 *
 */

void print_alphabet(void)
{
	int v;

	for (v = 'a'; v <= 'z'; v++)
	{
		_putchar(v);
	}

	_putchar('\n');
}
