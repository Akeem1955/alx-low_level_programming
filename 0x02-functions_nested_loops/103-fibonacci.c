#include<stdio.h>
/**
 * main - sum of fiboonnaci
 *
 * Return:0
 */

int main(void)
{
	long int a, b, total, temp, i;

	a = 1;
	b = 2;
	total = 0;

	for (i = 0; i < 33; i++)
	{
		if (a % 2 == 0 && a <= 4000000)
		{
			total += a;
		} else if (a > 4000000)
		{
			break;
		}
		temp = a;
		a = b;
		b = temp + a;
	}
	printf("%ld\n", total);
	return (0);
}
