#include "main.h"

/**
 * rev_string - reverse a string
 * @s:String to reverse
 * Return:0
 */

void rev_string(char *s)
{
	int i, j;

	j = 0;
	i = 0;
	while (s[i])
	{
		i++;
	}
	char temp[i];

	i = 0;
	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	j = sizeof(temp) - 1;
	i = 0;
	while (temp[j])
	{
		s[i] = temp[j];
		j--;
		i++;
	}
}
