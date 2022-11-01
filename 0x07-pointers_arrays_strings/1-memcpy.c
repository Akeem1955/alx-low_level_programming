#include "main.h"

/**
 * _memcpy - copy n bytes of memory
 * @dest:pointer
 * @src:char
 * @n: amount of bytes
 * Return: A pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned  int i;

	n--;
	i = 0;
	while (i < n)
	{
		*dest = src[i];
		i++;
		dest++;
	}
	*dest = '\n';
	return (&dest[0]);
}
