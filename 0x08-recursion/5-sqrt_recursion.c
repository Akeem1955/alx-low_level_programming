#include "main.h"

/**
 * Sqrt - helper func
 * @a:number to check
 * @b:param
 * Return:sqrt root
 */

int Sqrt(int a, int b)
{
	int res;

	if (b * b == a)
	{
		return (b);
	} else if (a / b <= 2)
	{
		return (-1);
	}
	else
	{
		res = (Sqrt(a, b + 1));
	}
	return (res);
}

/**
 * _sqrt_recursion - return sqrt
 * @n:parameter to check
 * Return:sqrt root
 */

int _sqrt_recursion(int n)
{
	int res;

	res = Sqrt(n, 1);
	return (res);
}
