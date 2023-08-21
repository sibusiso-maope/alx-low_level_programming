#include "main.h"
#include <stdio.h>

/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int k = 0;
	int l;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	s--;
	for (l = k ; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
