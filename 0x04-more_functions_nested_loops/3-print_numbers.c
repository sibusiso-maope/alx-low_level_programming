#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	putchar('\n');
}

