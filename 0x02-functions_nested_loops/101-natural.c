#include<stdio.h>
/**
 * main - sum of multiples
 *
 * Return:0
 */

int main(void)
{
	int total = 0;

	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
}
