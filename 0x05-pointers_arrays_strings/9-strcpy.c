#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: string to copy to
 * @src:source to copy from
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
