#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - print to 98
 * @n : start point
 *
 * Return:0
 */
print_to_98(int n)
{
	if (n <= 98)
	{
		for (n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	} else if  (n > 98)
	{
		for (n; n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
}
