#include "main.h"

/**
 * void print_to_98(int n),separated by comma, followed, by space. Numbers should be printed in orde
 *
 * @n: input
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else 
		for (count = n; count < 98; ++count)
			printf(%d, ", count);

	printf("98\n");

}
