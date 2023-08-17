#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	int k;

	for (k = 1 ; k <= 100 ; k++)
	{
		if ((k % 3 == 0) && (k % 5 == 0))
			printf("FizzBzz");
		else if (k % 3 == 0)
			printf("Fizz");
		else if (k % 5 == 0)
			printf("Buzz");
		else
			printf("%i", k);
		if (k != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
