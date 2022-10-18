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
		printf("%d", (1 % 10) * -(1));
		return ((l % 10) * -(1));
	}
	printf("%d", (l % 10))
	return (l % 10);
}
