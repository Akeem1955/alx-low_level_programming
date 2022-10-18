#include<stdio.h>
/**
 * main - sum of fiboonnaci
 *
 * Return:0
 */

int main(void)
{
	long long int a = 1;

	long long int b = 2;

	long long int total = 0;

	for (int i = 0; i < 50; i++)
	{
		if (a % 2 == 0 && a <= 4000000)
		{
			total += a;
		} else if (a > 4000000)
		{
			break;
		}
		long long int temp = a;

		a = b;
		b = temp + a;
	}
	printf("%lld\n", total);
	return (0);
}

