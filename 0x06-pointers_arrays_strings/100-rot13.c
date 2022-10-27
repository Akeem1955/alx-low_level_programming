#include "main.h"

/**
 * rot13 - encodes a string
 * @p:string
 * Return:char pointer
 */

char *rot13(char *p)
{
	int i, j;
	char encodeA[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encodeB[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (p[i])
	{
		j = 0;
		while (p[i] != encodeA[j] && j < 52)
		{
			j++;
		}
		if ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
		{
			p[i] = encodeB[j];
		}
		i++;

	}
	return (&p[0]);
}
