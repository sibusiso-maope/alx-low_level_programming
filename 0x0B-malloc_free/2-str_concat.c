#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, l;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	k = l = 0;

	while (s1[k] != '\0')
		k++;

	while (s2[l] != '\0')
		l++;

	conct = malloc(sizeof(char) * (k + l + 1));

	if (conct == NULL)
		return (NULL);

	while (s1[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}

	while (s2[l] != '\0')
	{
		conct[k] = s2[l];
		k++, l++;
	}
	conct[k] = '\0';
	return (conct);
}
