#include "main.h"

/**
 * _puts_recursion - print string
 * @s:char
 * Return:0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}