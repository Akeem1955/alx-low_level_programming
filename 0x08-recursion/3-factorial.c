#include "main.h"

/**
 * factorial - return factorial of given number
 * @n:num
 * Return:0
 */

int factorial(int n)
{
	int res;


	if (n < 0)
	{
		return (-1);
	}
	res = 0;
	if (n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		res = n * factorial (n - 1);
	}
	return (res);
}
