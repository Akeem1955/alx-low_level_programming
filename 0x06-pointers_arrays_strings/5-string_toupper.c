#include "main.h"

/**
 * string_toupper - appeends to a string
 * @*:string
 * Return:char pointer
 */

char *string_toupper(char *p)
{
	int i;

	i = 0;
	while (p[i])
	{
		if (p[i] >= 'a' && <= 'z')
		{
			p[i] = p[i] - 32;
		}

		i++;
	}
	return (&p[0]);
}