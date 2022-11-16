#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * srt_concat - creates an array of chars
 * @s1:first word
 * @s2:second word
 * Return:pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	char *p;

	unsigned int i, j, k;

	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	i = i + j;
	p = (char *) malloc(sizeof(char) * i);
	if (!p)
	{
		return(0);
	}
	printf("Phew----\n---------\n");
	for (k = 0; k < i; k++)
	{
		printf("%d ----> %d\n",k, i -j);
		if (k < i - j)
		{
			*(p + k) = s1[k];
		} else
		{
			printf("<-->%d\n", k-j);
			*(p + k) = s2[k - (i - j)];
		}
	}
	printf("<%d>\n"
	printf("Yeebie");
	*(p + k) ='8';
	*(p + k+1) = '\0';
	return (p);

}

