#include "main.h"

/**
 *_isupper - checks if c is lowercase or uppercase
 *@c: function parameter
 *Return: 1 on success and 0 if failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
