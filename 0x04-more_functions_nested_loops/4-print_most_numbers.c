#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers from 0 to 9 exluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
		if (k != 2 && k != 4)
			putchar(k + '0');
	}
	putchar('\n');
}
