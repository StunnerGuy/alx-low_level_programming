#include "main"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints number or fizz buzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (1 % 5 == 0 && i % 3 != 0)
		{
			ptintf(" Buzz");
		} else if (1 % 3 == 0 && i % 5 == 0)
		{
			printf("  FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
