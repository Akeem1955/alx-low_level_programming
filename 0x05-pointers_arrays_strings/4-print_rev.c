#include "main.h"

/**
 * print_rev - print a reverse of a string
 * @s:String to print in reverse
 * Return:0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
