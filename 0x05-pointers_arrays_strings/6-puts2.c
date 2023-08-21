#include "main.h"
#include <stdio.h>

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int k = 0;
	int l = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		k++;
	}
	l = k - 1;
	for (n = 0 ; n <= l ; n++)
	{
		if (n % 2 == 0)
	{
		_putchar(str[n]);
	}
	}
	_putchar('\n');
}
