#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Display alphabets in uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)

		putchar(ch);

	(ch = 'A'; ch <= 'Z'; ++ch)

		putchar(ch);

		putchar('\n');

	return (0);
}
