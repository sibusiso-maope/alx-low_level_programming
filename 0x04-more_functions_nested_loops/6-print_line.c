#include "main.h"
#include <stdio.h>

/**
 * print_line - Prints staright line on the terminal
 * @n: number of times the character '_' will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int k;

		for (k = 1 ; k < n ; k++)
			putchar('_');
		putchar('\n');
	}
}

