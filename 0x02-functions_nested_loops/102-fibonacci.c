#include<stdio.h>
/**
 * main - fibonnaci number
 *
 * Return:0
 */

int main(void)
{
	unsigned long int a, b, temp;

	a = 1;
	b = 2;

	for (int i = 0; i < 50; i++)
	{
		printf("%lld, ", a);
		temp = a;

		a = b;
		b = temp + a;
	}
	printf("\n");
	return (0);
}
