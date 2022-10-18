#include<stdio.h>
/**
 * main - 98 fibonnaci
 *
 * Return:0
 */

int main(void)
{
	unsigned long int a = 1;

	unsigned long int b = 2;

	for (int i = 0; i < 91; i++)
	{
		if(i < 90)
		{
			printf("%lu, ", a);
		} else
		{
			printf("%lu",  a);
		}
		unsigned int temp = a;

		a = b;
		b = temp + a;
	}
	printf("\n");
	return (0);
}
