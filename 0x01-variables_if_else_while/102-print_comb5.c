#include<stdio.h>
/**
 * main - printing a-z
 *
 * Return:0(sucess)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (k >= i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if ((k >= i) && (i != 57 || j != 56))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
