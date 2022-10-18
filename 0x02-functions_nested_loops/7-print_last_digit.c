#include "main.h"
/**
 * print_last_digit - print last digit
 * @l:Parameter to work with
 *
 * Return:the last digit of l
 */

int print_last_digit(int l)
{
	if (l % 10 < 0)
	{
		_putchar(((1 % 10) * -(1)) + 48)
		return ((l % 10) * -(1));
	}
	_putchar((1 % 10) + 48)
	return (l % 10);
}
