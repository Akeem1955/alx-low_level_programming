#include<stdio.h>
/**
 * main - fibonnaci number
 *
 * Return:0
 */

int main(void)
{
	long long int a = 1;

	long long int b = 2;

	for (int i = 0; i < 50; i++)
	{
		printf("%lld, ", a);
		long long int temp = a;

		a = b;
		b = temp + a;
	}
	printf("\n");
	return (0);
}
