#include "main.h"

/**
  * print_alphabet - Prints the alphabet in lowercase
  *
  * Retrun: Always 0 (Success)
  */

void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
	_putchar(c);
	}
	_putchar('\n');

}
