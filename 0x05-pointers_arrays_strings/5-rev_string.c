#include "main.h"

/**
 * rev_string - reverse a string
 * @s:String to reverse
 * Return:0
 */

void rev_string(char *s)
{
	int i, j;

	char *temp;

	temp = s;
	j = 0;
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	while (temp[i])
	{
		s[j] = temp[i];
		j++;
		i--;
	}
}
