#include <stdio.h>
/**
 * main - entry point
 *
 * Description: lists lowercase alphabets except  e and q
 *
 * Return: Always 0 (succes)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
