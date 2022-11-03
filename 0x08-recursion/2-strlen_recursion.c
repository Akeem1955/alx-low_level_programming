#include "main.h"

/**
 * _strlen_recursion - calc the len of string
 * @s:char
 * Return:0
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else if (*s)
	{
		length = 1 + (_strlen_recursion(s + 1));
	}
	return (length);
}
