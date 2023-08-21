#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int k, l, n;

	n = 0;

	for (k = 0; str[k] != '\0'; k++)
		n++;

	l = (n / 2);

	if ((n % 2) == 1)
		l = ((n + 1) / 2);

	for (k = l; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
