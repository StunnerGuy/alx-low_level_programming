#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point assign a random number
 *
 * Description - Print the last digit of the number stored in variable n
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lastdigit:

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;

	if (n % 10 > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
