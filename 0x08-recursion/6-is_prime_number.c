#include "main.h"

/**
 * Prime - helper func
 * @a:number to check
 * @b:param
 * Return:0 or 1
 */

int Prime(int a, int b)
{
	int res;

	if (a <= 1)
	{
		return (0);
	} else if (b == a)
	{
		return (1);
	} else if (a % b == 0)
	{
		return (0);
	}
	else
	{
		res = (Prime(a, b + 1));
	}
	return (res);
}

/**
 * is_prime_number - return 0 or 1
 * @n:parameter to check
 * Return:0 or 1
 */

int is_prime_number(int n)
{
	int res;

	res = Prime(n, 2);
	return (res);
}
