#include "main.h"
#include<stdlib.h>

/**
 * _strdup - creates an array of chars
 * @str:size of array
 * Return:pointer or null
 */

char *_strdup(char *str)
{
	char *p;

	unsigned int i, j;

	if (!str)
	{
		return (0);
	}
	for (i = 0; str[i]; i++)
	{
	}
	p = (char *) malloc(sizeof(char) * i);
	if (!p)
	{
		return(0);
	}
	for (j = 0; j < i; j++)
	{
		*(p + j) = str[j];
	}
	*(p + j) = '\0';
	return (p);

}

