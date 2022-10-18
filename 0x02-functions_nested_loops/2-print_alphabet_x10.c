#include "main.h"
/**
 * print_alphabet_x10 - print 10x alphabet
 *
 * Return:0
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		putchar('\n');
	}
}
