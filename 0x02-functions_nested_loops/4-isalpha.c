#include "main.h"

/**
 * _isalpha.c - Shows 1 if the input is A
 * @c: The character in ASCII code
 * Return: 1 for letters.  0 for the rest
 */

int _isalpha(int c)
{
	if ((c >= 65  && c  <=90) || ( c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
