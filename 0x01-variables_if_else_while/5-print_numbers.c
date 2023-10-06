#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digits number of base 10
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
