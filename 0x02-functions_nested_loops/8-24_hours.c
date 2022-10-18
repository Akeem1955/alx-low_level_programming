#include "main.h"
/**
 * jack_bauer - print every minute of the day
 *
 * Return:0
 */

void jack_bauer(void)
{
	for (int i = 0; i <= 23)
	{
		for (int j = 0; j <= 59)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}

