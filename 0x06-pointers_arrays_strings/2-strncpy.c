#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:destination
 * @src:source
 * @n:num to append
 * Return:char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (n > 0 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (&dest[0]);
}
