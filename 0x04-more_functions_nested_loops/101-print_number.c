#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 * Return:0
 */

void print_number(int n)
{
	unsigned int temp, power;

	power = 1;
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		temp = n;
	} else
	{
		temp = n;
	}

	while (temp > 10)
	{
		power = power * 10;
		temp = temp / 10;
	}
	while (power > 0)
	{
		_putchar(((n / power) % 10) + 48);
		power = power / 10;
	}
}
