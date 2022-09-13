#include "main.h"

/**
 * print_alphabet_x10 - A function that will print the alphabet 10 tims
 *
 */

void print_alphabet_x10(void)
{
	int line;
	char ch;

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)

			_putchar(ch);

		_putchar('\n');
	}
}
