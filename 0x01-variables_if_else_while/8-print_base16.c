#include <stdio.h>

/**
 * main - entry point
 *
 * description - prints numbers to base 16
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++
			)
		putchar(ch);

	putchar('\n');

	return (0);


}
