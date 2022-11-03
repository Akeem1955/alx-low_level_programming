#include "main.h"

/**
 * _pow_recursion - return factorial of given number
 * @x:num
 * @y:power
 * Return:0
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	res = 0;
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
	}
	return (res);
}
