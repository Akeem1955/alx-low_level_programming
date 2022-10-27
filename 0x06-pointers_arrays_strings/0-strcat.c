#include "main.h"

/**
 * _strcat - appeends to a string
 * @dest:destination
 * @src:source
 * Return:char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (&dest[0]);
}
