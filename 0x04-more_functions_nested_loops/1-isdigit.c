#include"main.h"

/**
* _isdigit - Checks if th charater is digit
* @x: The number to be chechked
* Retutns: 1 for a  character that will be a digit 0 for any else
*/

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);

}
