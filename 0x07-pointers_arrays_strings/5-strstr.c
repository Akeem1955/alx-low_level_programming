#include "main.h"

/**
 * _strstr - works like the strpbrk in c
 * @haystack:pointer
 * @needle:char pointer
 * Return: pointer if found
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned  int i, j, n;

	j = 0;
	n = 0;
	i = 0;
	while (haystack[j])
	{
		while ((haystack[j] && needle[i]) && (haystack[j] == needle[i]))
		{
			n = 1;
			j++;
			i++;
		}
		if (n == 1 && needle[i] == '\0')
		{
			break;
		} else if (n == 1)
		{
			return (0);
		}
		j++;
	}
	return (needle);
}
