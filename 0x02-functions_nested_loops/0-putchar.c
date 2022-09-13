#include "main.h"

/**
 * main - Entry point
 *
 * Description: A script that prints _putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');

	return (0);

}
