#include<stdio.h>
/**
 * main - fibonnaci number
 *
 * Return:0
 */

int main(void)
{
	unsigned long int a, b, temp, i;

	a = 1;
	b = 2;

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
		{
			printf("%lu, ", a);
		} else
		{
			printf("%lu", a);
		}
		temp = a;
		a = b;
		b = temp + a;
	}
	printf("\n");
	return (0);
}
