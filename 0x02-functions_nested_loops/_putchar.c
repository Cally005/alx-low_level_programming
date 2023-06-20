#include <unistd.h>

/**
 * _putcher - writes the c to stdout
 * @c: The character to print
 * Return: On sucess l.
 * On error, -l is returned, and error i set appropriately.
 */

int _putchar(char c)

{
	
	return(write(1, &c, 1));

}
