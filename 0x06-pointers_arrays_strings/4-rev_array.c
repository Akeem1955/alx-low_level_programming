#include "main.h"

/**
 * reverse_array - appeends to a string
 * @a:destination
 * @n:source
 * Return:0
 */

void reverse_array(int *a, int n)
{
	int i, temp, pow, j;

	i = 0;
	j = n - 1;
	while (i < n)
	{
		pow = 1;
		temp = a[j];
		while (temp > 0)
		{
			pow = pow * 10;
			temp = temp / 10;
		}
		pow = pow / 10;
		temp = a[j];
		while (pow >= 1)
		{
			_putchar((temp / pow) + 48);
		}
		i++;
		j--;
	}
