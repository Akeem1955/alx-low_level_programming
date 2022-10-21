#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 * Return:0
 */

void print_number(int n)
{
	unsigned int temp, multiply;

	temp = 0;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar(48);
	}

	while (n > 0)
	{
		temp = (temp * 10) + (n % 10);
		if (temp == 0)
		{
			multiply = 1;
		}
		n = n / 10;
	}
	while (temp > 0)
	{
		_putchar(temp % 10 + 48);
		temp = temp / 10;
	}
	if (multiply == 1)
	{
		_putchar(48);
	}
}i
