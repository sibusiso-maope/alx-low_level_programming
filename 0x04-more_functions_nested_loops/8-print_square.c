#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square using the '#' character
 * @size: size od the square
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int k, l;

		for (k = 1 ; k <= size ; k++)
		{
			for (l = 1 ; l <= size ; l++)
				putchar('#');
			putchar('\n');
		}
	}
}
