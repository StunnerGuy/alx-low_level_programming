#include <stdio.h>
#include "main.h"

/**
 * main - prints out from 1 to 100, followed by a new line.
 *
 * But for multiples of 3, print Fizz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			print(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i == 1)
		{
			printf(" %d", i);
		}
		else
		{
			printf(" %d",  i);
		}
	}

	printf("\n");

	return (0);
}
