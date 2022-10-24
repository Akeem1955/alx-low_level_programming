#include "main.h"

/**
 * print_array - print array 
 * @a:array
 * @n:how many to be printed
 * Return:0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
