#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lower case letters in reverse
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)

		putchar(ch);

	putchar('\n');

	return (0);
}
