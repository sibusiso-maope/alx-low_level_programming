#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int k;
	int l;

	for (k = 0 ; k < 10 ; k++)
	{
		for (l = 0 ; l < 15 ; l++)
		{
			putchar(l + '0');
		}
		putchar('\n');
	}
	putchar('\n');
}
