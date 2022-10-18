#include<stdio.h>
/**
 * main - sum of fiboonnaci
 *
 * Return:0
 */

int main(void)
{
	unsigned long int a, b, total, temp, i;

	for (i = 0; i < 50; i++)
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
	printf("%lu\n", total);
	return (0);
}

