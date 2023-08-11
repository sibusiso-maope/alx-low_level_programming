#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0
 */

int main(void)
{
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		if (j == 9)
			putchar(j + '0');
		else
		{
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
