#include<stdio.h>
#include<math.h>

/**
 * main - largest prime
 * Return:0
 */

int main(void)
{
	unsigned long int n, i;

	n = 612852475143;
	while (n % 2 ==  0)
	{
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%lu\n", n);
	}
	return (0);
}
