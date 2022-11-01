#include "main.h"

/**
 * _strspn - locates a char
 * @s:pointer
 * @accept:char
 * Return: number of bytes that matches
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned  int i, j, n;

	j = 0;
	n = 1;
	while (accept[j])
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			i++;
		}
		j++;
	}
	return (n);
}
