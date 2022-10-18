#include "main.h"
/**
 * times_table - print times table
 *
 * Return:0
 */

void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (result >= 10)
			{
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar(result + 48);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
