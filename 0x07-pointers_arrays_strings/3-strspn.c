#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l] ; l++)
		{
			if (*s == accept[l])
			{
				k++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
