#include "main.h"
/**
 * print_times_table - times table
 *@n:  range of times table
 * Return:0
 */

void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{
				int res = i * j;

				if (res >= 10)
				{
					_putchar(n / 10 + 48);
					_putchar(n % 10 + 48);
					_putchar(',');
					_putchar(' ');
				} else if (res >= 100)
				{
					_putchar(n / 100 + 48);
					_putchar(n / 10 % 10 + 48);
					_putchar(n % 10 + 48);
					_putchar(',');
					_putchar(' ');
				} else
				{
					_putchar(n % 10 + 48);
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
