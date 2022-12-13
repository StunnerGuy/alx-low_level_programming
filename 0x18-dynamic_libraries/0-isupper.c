#include "main.h"

/**
 * _isupper - checks if a character is uppercase or lowercase
 * @c: character to be tested
 * Return: 1 if it is uppercase, and 0 if it is not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
